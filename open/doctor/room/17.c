#include <room.h>
inherit ROOM;
void create()
{
        set("short","ľ�˳�");
        set("long", @LONG

    ǽ���������������Ѩ��ͼ�ͽ�˵���Ա��������ǣ�����ʽ��
Ϊ�����������ŵ��ӣ������������ЩѨλ�������ǲ�������������
�����Ƕ���������񱳵�ͦ������

LONG
        );
        set("outdoors", 1);
        set("exits", ([ /* sizeof() == 3 */
        "east":__DIR__"16",
        "south":__DIR__"21",         
        "west":__DIR__"18",

        ]) );
        set("no_fight", 0);
        set("objects",([ /* sizeof() == 2 */
  "/open/doctor/npc/trainee1" : 1,              
  "/open/doctor/npc/trainee2" : 1,           

]));

  setup();
}


