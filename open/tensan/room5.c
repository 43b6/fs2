inherit ROOM;
#include <ansi.h>
void create () {
        set ("short","��ɽ����");
        set ("long",@LONG
�˴����Գ�����ã�ݣ�·��һ��ʯͷ���������ɽ���֣����Ȼ����
��ԭ��������ǽ��������е�ʥ����ɽ���㲻֪�����ļӿ�Ų�������Ѱ
��������������������������顣
LONG);
           
        set("exits", ([ /* sizeof() == 1 */
        "westup" : __DIR__"room6",
        "eastdown" :  __DIR__"room4",       
        ]));

       
        setup();
}
