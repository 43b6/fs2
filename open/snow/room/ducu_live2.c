#include <room.h>

inherit ROOM;

void create()
{
	set("short","���¾�С��");
          set("long",@LONG
�����Ƕ��¾ӵ���������Ȼֻ��һ��С�����������ø����
��������Ϣ��û��һ�����ڰ�����ơ����³�ƽʱ���������ƻ�
֮ʱ������ݺ���裬������С��֮�У�ϸϸƷζ�о�֮�֡�
 
 
LONG);
        set("exits", ([
	"out":__DIR__"ducu_live1",
	"west":__DIR__"ducu_live3",
        ]) );
	set("light_up",1);
        setup();
}
