inherit ROOM;

void create()
{
        set("short", "ҩ��");
        set("long", @LONG

    ��������Ĵ��ͣ��������������������Թ�̫
    ���ˣ�����ľ�����һ��ģģ�����ġ�

LONG
        );
        set("can_search",1);
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"r6",
  "south" : __DIR__"r8",
]));
        set("no_clean_up", 0);

        setup();
        }


