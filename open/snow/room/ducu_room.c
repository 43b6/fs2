#include <room.h>

inherit ROOM;

void create()
{
	set("short","�������ſ�");
          set("long",@LONG
�����Ƕ�������ſڣ�ֻ��ǽ�Ϲ�������д�ţ�
     
       �� ѩ���ɵ��������� ����תа�ơ����³�֮���� ��
 
       �� �� ��                               �� һ ��
       �� �� ��                               �� �� ��
       �� �� ��                               �� һ ��
       �� �� ��                               �� Ц ��
       �� ѩ ��                               �� Ī ��
       �� �� ��                               �� ֪ ��
       �� �� ��                               �� �� ��
 
 
LONG);
        set("exits", ([
	"west":__DIR__"ducu_room_in",
	"east":__DIR__"room20",
        ]) );
	set("light_up",1);
        setup();
}
