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
"east":__DIR__"forest",
                "north":"/u/b/bigcat/room/forest3"       
        ]) );
setup();

}
