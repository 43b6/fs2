//open/prayer/room/westarea/road28.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. ����ˮ���Ĵ�
	�ŵص�ֻ�н������˲Ż�֪��, ����ʥ������ŵ����������
	�ɽ������Դ��ڵ�, ��������Ҳ��֪������ˮ��������. ����
	���Ե���ʥ���֧�ŵ�"������"��"������". �������ϱ�����
	��ר�õ�·.
LONG);

        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"road27",		//�ֵ�
        "west":__DIR__"road29",		//�ֵ�
 
        ]) );
        
        set("no_fight", 0);
        
  setup();
}
