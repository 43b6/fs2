//open/prayer/room/garden2.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    Ũ���Ѫ��ζ�˱Ƕ��������㲻��Ϊ�⣬
	���⽭�������ߣ���͹��ߵ����Ϲ��������
	�������㼣�ǳ����ԣ�������Ѫ���ǹ��޵�Ѫ
	��??�����ģ�ֻҪ�����Լ���Ѫ�ͺ���!!

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "north":"/open/prayer/room/garden6",		//��԰
        "west":"/open/prayer/room/garden3",		// "
        ]) );
   setup();
}
