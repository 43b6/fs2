#include <room.h>

 inherit ROOM;

 void create()
{
        set("short", "�ٲ�");
        set("long", @LONG
        
        
һ�´�,��ǰ��ɫ�续,��Ϫ����,ˮ��ƽ��֮��,�����������Ʈ�ݵĴ���
,���л���ֲ����������,һ��������Ю�����µĻ���,���㾫��Ϊ֮һ��
,���������������Ȼ��ͬ,��ֱ����������Դ!!



LONG
        );

        set("exits", ([
                "north": __DIR__"road4",
                "down":__DIR__"road1",
        ]) );
        
setup();

}
