//open/prayer/room/westarea/road24.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. �����ǽ���ʥ
	��̷ֲ�֮һ��"������", ��������ԭ�����һλʦ̫, ��
	�䱾�Ҿ�ѧ, ��Ϊ������, ����ȴ�ܵ���������һ���ŵ�����
	, �ѵ�������......
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 3 */
       	"north":__DIR__"road19",		//�ֵ�
	"south":__DIR__"road27",		//�ֵ�
	"east":"/open/prayer/room/kiyan/2-door", //�ֵ�
	
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
