inherit ROOM;
void create()
{
        set("short", "ҩ��");
        set("long", @LONG

           Ǭ�����ԣ���������
           ������а��������а
           ǰ�����ң���������
                                 
��������Щ�֣�����Լ�����̰�ģ�����ҩ԰����֮�С�

LONG
        );
        set("can_search",1);
        set("exits", ([ /* sizeof() == 6 */
  "west" : __DIR__"r6",
  "north" : __DIR__"r5",
  "south" : __DIR__"r6",
  "up" : __DIR__"r6",
  "down" : __DIR__"r6",
  "east" : __DIR__"r7",
]));
        set("no_clean_up", 0);

        setup();
        }


