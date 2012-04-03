#include </open/open.h>
#include <ansi.h>
inherit ROOM;

void create ()
{
set("short", "Ҷ��ɱ������");
set("long", @LONG
   �˴���Ҷ��ɱ��ר�����ң�һ��ʱ��ɲ��������Խ����ġ�
   �����У���û���ر��װ��Ʒ��ֻ�����м��軨���ֻ���word)��
   ����֮�⣬���Ҳֻ��һ�Ե����Ƚ�����һ����ˡ�

LONG 
);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"masterm.c",
]) );
  set("item_desc", ([ /* sizeof() == 2 */
  "word":"һ��ƽ�����ֻ���������������ע�⵽һ�Եģ����裩\n",
  "sign":"����������һ�·��ֿ���ת��(turn),���Ƿ�ÿ���(think)������������\n",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "����" : "����ûʲô�ر�ģ���ȴ���˵�ָӡ��sign)��\n",
  "mark" : "����鰵��֮���㰴ס���ۣ�����ת��turn)��\n",
]));
  set("objects",([
  "/open/killer/npc/spy3.c":1,]));
  setup();
}
void init()
{
	add_action("do_think","think");
	add_action("do_turn","turn");
}

int do_think(string str)
{
  object me;
  
  me=this_player();
  message_vision("���ݾ����������������ϸ�۲�һ�£���Ȼ�����ձ����а��ۣ�mark)\n",me);
  me->set_temp("diray",2);
  return 1;
}

int do_turn(string str)
{
	object me=this_player();
        
  if( str != "����" )
    return notify_fail("תʲô����Ҫ�丽�۾��𣿣�\n");
  if(me->query_temp("diray") != 2)
  {
    message_vision("��С�Ĵ������أ�һ֧��������$N��\n",me);
    me->add("kee",-30);
    return 0;
   }
  if(me->query_temp("diray") == 2)
  {
    message_vision(HIG"���Ż����ת�����ֻ��������������Ŵ򿪡�\n",me);
    message_vision("������һ��Ҷ��ɱ���ռǣ����÷���ĳһҳ\n",me);
    message_vision("���ݡ������������ǲ�С�ģ���Ȼ��Ϊɱ��ħ��ų�̫��ɱ��\n",me);
    message_vision("�����У�ʹ�����ܵ��ж�ܲ����Ĳ��������ˡ�\n",me);
    message_vision("�ɶ񣬰�����ӡ�ڣ�ר�ñ����ң����ˣ�ϣ��������Ҫ˵��ȥ\n",me);
    message_vision("���������ҵ�Կ�ף������ϴε���һ¥�ˣ����Ҳ���������\n",me);
    message_vision("���������ڿ���ȥʱ�����������ƺ��������ˣ����Ǽ�æ���˳�ȥ\n\n"NOR,me);
    me->set_temp("diray",1);
    me->move(__DIR__"masterm.c");
    return 1;
  }
}
