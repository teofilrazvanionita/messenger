CREATE TABLE messages (
	  ID BIGINT UNSIGNED NOT NULL AUTO_INCREMENT,
	  Destination VARCHAR(20) NOT NULL,
	  Sender VARCHAR(20) NOT NULL,
	  Message VARCHAR(1024) NOT NULL,
	  When TIMESTAMP,
	  PRIMARY KEY (ID),
	  FOREIGN KEY (Destination)
	    REFERENCES users(Username),
	  FOREIGN KEY (Sender)
	    REFERENCES users(Username)
) ENGINE=XtraDB;

