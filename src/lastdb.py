import sqlite3
import pickle


class lastDB:
    def __init__(self):
        self.logs = {}  # (table_name, k, row)
        self.functions = {'select': self.select,
                          'insert': self.insert,
                          'delete': self.delete,
                          'update': self.update,
                          'create': self.create}

    def connect(self, db_dir):
        print("Connect")
        self.db = sqlite3.connect(db_dir)
        return self.db

    def execute(self, command):
        print("Execute", command[:6])
        return self.functions[command[:6]](command)

    def close(self):
        print("Close")
        self.db.close()

    def commit(self):
        print("Commit")
        self.db.commit()

    def cursor(self):
        print("Cursor")
        # return self.db.cursor()

    # CRUD operations
    def create(self, command):
        print("Create ", command)
        commands = command.split()
        table_name = commands[2]
        self.logs[table_name] = (50, 0)
        print(self.logs)
        return self.db.execute(command)

    def select(self, command):
        return self.db.execute(command)

    def insert(self, command):
        commands = command.split()
        table_name = commands[2]
        print(self.logs)
        self.logs[table_name][1] += 1
        print("Insert ", command)
        print(self.logs)
        return self.db.execute(command)
        pass

    def delete(self, command):
        return self.db.execute(command)

    def update(self, command):
        return self.db.execute(command)
