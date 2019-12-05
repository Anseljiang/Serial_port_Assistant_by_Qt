/*
 * Copyright (C) 2014 ~ 2015 HANGZHOU DIANZI UNIVERSITY(HDU).
 * Author: hening
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "serialsdispatcher.h"

serialsDispatcher::serialsDispatcher(QObject *parent) :
    QObject(parent)
{
   iface = new QSerialPort;
}

serialsDispatcher::~serialsDispatcher() {
    if (iface != NULL) {
        delete iface;
        iface = NULL;
    }
}

bool serialsDispatcher::open(){
if(iface->open(QIODevice::ReadWrite))
{
    return true;
}
return false;
}

void serialsDispatcher::clear()
{
    iface->clear();
}

void serialsDispatcher::setPortName(const QString &portname)
{
    iface->setPortName(portname);
}

void serialsDispatcher::setBaudRate(const int &baudrate)
{
    iface->setBaudRate(baudrate);
}

void serialsDispatcher::setDataBits(const int &databit)
{
    iface->setDataBits(static_cast<QSerialPort::DataBits>(databit));
}

void serialsDispatcher::setParity(const int &parity)
{
    iface->setParity(static_cast<QSerialPort::Parity>(parity));
}
void serialsDispatcher::setStopBits(const int &stopbits)
{
    iface->setStopBits(static_cast<QSerialPort::StopBits>(stopbits));
}

void serialsDispatcher::setFlowControl(const int &flowcontrol)
{
    iface->setFlowControl(static_cast<QSerialPort::FlowControl>(flowcontrol));
}

void serialsDispatcher::close()
{
    iface->close();
}

void serialsDispatcher::write(const int &data, const int &len)
{
    char temp[1]={char(data)};
    iface->write(temp,len);
}

void serialsDispatcher::write(const QByteArray &data)
{
    iface->write(data);
}

QByteArray serialsDispatcher::readAll()
{
 return iface->readAll();
}

bool serialsDispatcher::isOpen()
{
return iface->isOpen();
}

bool serialsDispatcher::setDataTerminalReady(bool set)
{
    iface->setDataTerminalReady(set);
}

bool serialsDispatcher::setRequestToSend(bool set)
{
    return iface->setRequestToSend(set);
}

QSerialPort::PinoutSignals serialsDispatcher::pinoutSignals()
{
return  iface->pinoutSignals();
}

