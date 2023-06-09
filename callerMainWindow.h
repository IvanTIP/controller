#pragma once
#include <QMainWindow>
#include <QtWidgets/QPlainTextEdit>


class CallerMainWindow : public QMainWindow {
    Q_OBJECT
    bool TVStatus = false;
    QString status = "off";
    QString currentChannel;
    QString valLevel = "0";
    int channel = 0;
public:
    QPlainTextEdit *plainTextEdit = nullptr;

    explicit CallerMainWindow(QWidget* parent = nullptr): QMainWindow(parent) {}

    void showInfo() {
        if (TVStatus) {
            plainTextEdit->setPlainText("TV...." + status + "\n" + "channel...." + currentChannel + "\n" + "volume...." + valLevel + "%");
            channel = currentChannel.toInt();
            currentChannel.clear();
        } else {
            plainTextEdit->setPlainText("TV...." + status);
        }
    }

public slots:

    void power(){
        if(!TVStatus) {
            TVStatus = true;
            status = "on";
            currentChannel = QString::number(channel);
            showInfo();
        } else {
            TVStatus = false;
            status = "off";
            showInfo();
        }
    }
    void add1(){
        if(TVStatus) {
            currentChannel += "1";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
        }
    }
    void add2(){
        if(TVStatus) {
            currentChannel += "2";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
        }
    }
    void add3(){
        if(TVStatus) {
            currentChannel += "3";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
        }
    }
    void add4(){
        if(TVStatus) {
            currentChannel += "4";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
        }
    }
    void add5(){
        if(TVStatus) {
            currentChannel += "5";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
        }
    }
    void add6(){
        if(TVStatus) {
            currentChannel += "6";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
        }
    }
    void add7(){
        if(TVStatus) {
            currentChannel += "7";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
        }
    }
    void add8(){
        if(TVStatus) {
            currentChannel += "8";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
        }
    }
    void add9(){
        if(TVStatus) {
            currentChannel += "9";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
        }
    }
    void add0(){
        if(TVStatus) {
            currentChannel += "0";
            if(currentChannel.size() > 2) currentChannel = "100";
            plainTextEdit->setPlainText(currentChannel);
            showInfo();
        }
    }
    void valIncrease(){
        if (TVStatus && valLevel.toInt() < 100) {
            int buf = valLevel.toInt();
            buf += 10;
            valLevel = QString::number(buf);
            currentChannel = QString::number(channel);
            showInfo();
        } else if (TVStatus){
            int buf = 100;
            valLevel = QString::number(buf);
            currentChannel = QString::number(channel);
            showInfo();
        }
    }
    void valDecrease(){
        if (TVStatus && valLevel.toInt() > 0) {
            int buf = valLevel.toInt();
            buf -= 10;
            valLevel = QString::number(buf);
            currentChannel = QString::number(channel);
            showInfo();
        } else if (TVStatus){
            int buf = 0;
            valLevel = QString::number(buf);
            currentChannel = QString::number(channel);
            showInfo();
        }
    }
    void channelUp(){
        if(TVStatus) {
            ++channel;
            if(channel > 100) channel = 100;
            currentChannel = QString::number(channel);
            showInfo();
        }

    }
    void channelDown(){
        if(TVStatus) {
            --channel;
            if(channel < 0) channel = 0;
            currentChannel = QString::number(channel);
            showInfo();
        }
    }
    void enter(){
        if(!currentChannel.isEmpty()) {
            showInfo();
        }

    }

};
