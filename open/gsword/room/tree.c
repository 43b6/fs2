#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "����");
        set("long", @LONG
����������ڲ�,�벻���⾹Ȼ���ж���,���Ѱ�Ϩ�Ļ��(torch)�������Ͻ�,���
��������,ǰ������ʱ���������ĺ����,�ֲ��嵽����Ұ�����������,ʹ������
����һ��Ī���Ŀ־�,          
LONG
        );

        set("item_desc",(["torch":
"���Ѽ���Ϩ��Ļ��\n"]));        
        
        set("exits", ([
		"out": "/u/b/bigcat/room/lnroad1",
                "north":"/u/b/bigcat/room/tree1"
        ]) );
        
setup();
}
