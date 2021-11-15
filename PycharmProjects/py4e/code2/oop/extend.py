class Text(str):
    def duplicate(self):
        return self + self


class TrackableList(list):
    def append(self, object):
        print("Append called")
        super().append(object)


tlist = TrackableList()
tlist.append("1")
print(tlist)
