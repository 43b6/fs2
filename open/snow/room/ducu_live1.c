#include <room.h>

inherit ROOM;

void create()
{
	set("short","���¾�");
          set("long",@LONG
�����Ƕ��³���ǰ��ס֮�أ��źš����¾ӡ������³�һ���°���
��ϲ���������û�±�����Сʫ���飬Ҳ������������һλ���Ӹ���
���ڶ��¾Ӵ������Կ������³���ǰ�����µ�ʫ�ʡ��ڴ��ſڿ��Կ���
һ��������
 
                ������ѩ��Ӱ����
                            
                              ��������ɧ�˳��
                 
 
LONG);
        set("exits", ([
	"south":__DIR__"ducu_live",
	"enter":__DIR__"ducu_live2",
        ]) );
	set("light_up",1);
        setup();
}
