#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "��ɽɭ��");
        set("long", @LONG
����һƬ�޾�����������Ũ�ܵ���Ҷ�ڵ��£�ֻ�������Ĺ����ܴ�϶����
͸����������ż�з������޴��󣬸�ɽ�ĵ��¼���ȱ���������ů��ʹ��
�е�һ����ĺ���ӿ����ͷ��\n
LONG
        );

        set("exits", ([
		"west": "/u/b/bigcat/room/wforest2",
                "north":"/u/b/bigcat/room/wforest1",
                "east":"/u/b/bigcat/room/road6"
        ]) );
setup();

}
