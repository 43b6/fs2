#include <room.h>

inherit ROOM;

void create()
{
	set("short","���¾��鷿");
	set("long",@LONG
�����Ƕ��³�ƽʱ�ζ�ʫ�飬�ۿ��ټҾ�����鷿��������С��ȴ������
���Ӱټҵľ��䣬���³��Ϊһ���ӣ���ͷ��ÿ���飬�����ٿ����ٱ�����
�����ҵ����������ɴ˿ɼ������³ֻϲ�����գ�Ҳʮ��������ѧ��
 
 
LONG);
        set("exits", ([
	"east":__DIR__"ducu_live2",
	"north":__DIR__"ducu_live4",
        ]) );
	set("light_up",1);
        setup();
}
