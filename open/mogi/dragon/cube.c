//by Casey
inherit ROOM;
#include <ansi.h>

void create()
{
set ("short", HIC"�����ڽ��"NOR);
	set( "build", 18 );
set ("long","�Դ����������շ��˻ƽ������ ,����Ⱥ�������Ĵ�Ϊ
�� ,��������ڴ˷�ӡסһ��ǿ����� ,ϣ���������� ,��
�ܱ������е�������ǿ��������ֺ���ǰ���������޵ĺ�� ,
����ȴ������ƺ���ǿ����ħ�������� ...

");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
               set("exits",([ /* sizeof() == 1 */
           
            "north" : __DIR__"d-11",
            "enter" : __DIR__"bc",
      ]));

 set("outdoors", "/u/p");
        setup();
}




