// Room: /open/port/room/r3-4.c

inherit ROOM;

void create()
{
        set("short", "�����");
        set("long", @LONG

    �����Ǽ�ҽ�ݣ���ؾ�������Ų��ƽ�����ġ������š���
����������֮�佻������Ҽɶ���𣬵������Ų��������һ��
���˸о������ûʣ�����ʹ�˸о��ǳ����ᣬ���Ǵ����濴����ȴʮ
�ֵĸɾ���

LONG
        );
        set("light_up", 1);
        set("objects", ([ ]));
        set("outdoors", "/open/port");
        set("exits", ([ /* sizeof() == 3 */
  "west" : __DIR__"r3-3",
  "north" : "/open/doctor/room/d1",
  "south" : __DIR__"r3-6",
]));
        set("no_clean_up", 0);

        setup();
        }


