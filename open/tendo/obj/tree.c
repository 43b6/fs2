inherit ITEM;
#include <ansi.h>

int i=3;
void create()
{
        set_name("һ�ð�������",({"tree"}));
                
                set("unit", "��");
                set("long",
                "һ�ý����������ľ�����Ͻ�ʵ���ۡ�����һЩ���صĹ�ʵ��\n");
                set("no_get","1");
}

void init()
{
  add_action("do_shake","shake");
}


int do_shake(string arg)
{
 object obj;
 
 if(arg!="tree")
    return 1;
 i--; 
 if( i>1) {
   obj=new("/open/tendo/obj/fruit");
   obj->move("/open/tendo/kunlun/g2");
   message_vision("
һ�ѹ�ʵ��������....����ž��k����ͷ���ۻ���
......"HIC"��........"HIW"��....  "HIB"��..
.... "MAG"�� .....     "HIY"��"NOR"..........
��!!....���Ϸ��ǵ��......
......@&#%#
\n",this_object());
} else {

message_vision("��ҡ���ϰ��죬ֻ�����˼�Ƭ��Ҷ��\n",this_object());
} 

 return 1;
}