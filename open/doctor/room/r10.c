inherit ROOM;
void create()
{
        set("short", "ҩ��");
  set ("long", @LONG

              ����ҩ����ֲ��
   ������������Ļ��ԣ����������ŵ�������..
LONG);
        set("can_search",1);
        set("outdoors",1);

        set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"r11",
  "east" : __DIR__"r9",
]));
        set("no_clean_up", 0);

        setup();
        }


