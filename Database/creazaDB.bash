#!/bin/bash


mysql -u root -p < ./messenger.sql
mysql -u root -p messenger < ./TableDef_users.sql

