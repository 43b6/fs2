//open/prayer/room/westarea/road32.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. �����ǽ���ʥ
	��̷ֲ�֮һ��"������", ������ʥ��̾�ʦ�ĵ�������, ��
	���ǻ�֮��, ����Ȩ��, �ֵ���������˾�ʦֱ���Ĳ���, ��
	һ�е�һ�п���ֻ�н�����֪��Ϊʲô�˰�!!
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
       	"north":__DIR__"road27",		//�ֵ�
	"south":__DIR__"road35",		//�ֵ�
        "east":"/open/prayer/room/zhenche/2-door",
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
