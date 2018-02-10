# -*- coding: utf-8 -*-
import pymysql

class ConnectDB :
    def __init__(self):
        self.db = pymysql.connect("192.168.0.13", "root", "root", "myDB")
        self.cursor = self.db.cursor()

    def select(self, query) :
        sql = query
        self.cursor.execute(sql)
       # print (myDB.select())
        value = self.cursor.fetchall()
        self.db.commit()
        return value

    def updateQuery(self, query):
        self.cursor.execute(query)
        self.db.commit()


