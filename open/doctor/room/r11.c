inherit ROOM;
void create()
{
        set("short", "ҩ��");
        set("long", @LONG

    ������԰���ڽϸߵ��µأ����������ｨ
    ��һ����̨������ɹɹ�ղ��µ�ҩ�ġ�
LONG
        );
        set("exits", ([ /* sizeof() == 3 */
  "up" : __DIR__"r11-1",
  "south" : __DIR__"r10",
  "east" : __DIR__"r8",
]));
        set("can_search",1);
        set("no_clean_up", 0);
        set("outdoors", 1);

        setup();
        }


