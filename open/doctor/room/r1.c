inherit ROOM;
void create()
{
        set("short", "ҩ��");
        set("long", @LONG

    ��һ���������������������ɢ����ɫģ�����ԣ�����΢���ĵƹ�
����ϡ���Ա��ĳ������Ǹ�԰�ӣ���ͷһ�����ۡ�ԭ��������һ����ֲ
ҩ��ĳ�����̧ͷ��ǰ���������ƺ������Ÿ������ҩ�ݡ�

LONG
        );
  set("can_search",1);
  set("exits", ([ /* sizeof() == 3 */
  "south" : __DIR__"r2",
  "east" :__DIR__"r",
  "enter" :__DIR__"1",
]));
        set("no_clean_up", 0);

        setup();
}



