#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "��Ѩ");
        set("long", @LONG
�������Ѩ���ڲ���һ��������������й���£�������������Ѩ��ԭ������Ѩ
������͸��һ��С�ף�ʹ��������ˮ���Խ��룬Ҳ��Ϊ��ˣ����������һЩ
����֮����ֲ�
LONG
        );

        set("exits", ([
"south":__DIR__"hole"
        ]) );
setup();

}
