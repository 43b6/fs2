#include <room.h>
#include "../../open.h"

inherit ROOM;

void create()
{
	set("short","��������");
          set("long",@LONG
�����Ƕ��³�����ޣ�ͣ����һ�߹�ľ������ú�ɴ��ס����ľ
��ͣ�ŵ������ѩ���ɵľ������˶��³�����壬�ഫ���³����޼�
���յģ���Ҳ���˻��ɶ��³������˰�����������⣬����һ˵��˵
���³���װ�����������˶�Ŀ����װ����Ŀ��Ϊ�Σ�ȴ���޷����͡�
 
LONG);
        set("exits", ([
	"east":__DIR__"ducu_room_in",
	"north":__DIR__"ducu_room_in2",
        ]) );
	set("objects",([
		SNOW_OBJ"box":1,
	]));
	set("light_up",1);
        setup();
}
