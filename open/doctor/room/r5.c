inherit ROOM;
void create()
{
        set("short", "ҩ��");
  set ("long", @LONG

    ������ҩ������Ĵ���ң�һ��������С������
    ���﹡�������룬�������洫��Ũ�������ζ..

LONG);

        set("can_search",1);
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r4",
  "north" : __DIR__"r6",
  "east" : __DIR__"r2",
]));
        set("no_clean_up", 0);

        setup();
        }


