//open/prayer /zhenche/1.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�����Ŵ���");
        set("long",@LONG

        �����Ŵ���װ�����һ�ֺ���ˬ�ʵĸо�. ���ԵĿ���һ
        ���ſ�, ֱ����β. �õĶ���������ϵ�ľ������! ����
        �ұ�վ��һλ�һ���.

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "south":__DIR__"4",             //����
        "west":__DIR__"2",              //����
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/right" : 1,           //�һ���
]));
  setup();
}

