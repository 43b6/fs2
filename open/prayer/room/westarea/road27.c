//open/prayer/room/westarea/road27.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	���򶫲�������·��. ��������������, �ϱ�����������.
	ʥ��������ѧ֮һ�Ļ����ķ�������ÿ���˶���ѧϰ��,
	��˵Ҫ�õ�����ˮ��֮����ܹ�����!!����ˮ��������ֻ
	֮��, ���еİ�ˮ���Ǽ��ػ�����һ������ڹ��ķ�.
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road24",	//�ֵ�
	"south":__DIR__"road32",	//�ֵ�
	"west":__DIR__"road28",		//�ֵ�
 
        ]) );
        set("no_fight", 0);
        
  setup();
}
