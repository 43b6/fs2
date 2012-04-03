#include </open/open.h>
inherit ROOM;
void create ()
{
  set ("short", "ɱ��\��\��");
  set ("long", @LONG
������ɱ������ϰ����\��\�ĺõط��������Ѿ��в������ڳԷ��ˡ�
���������õ����������̻��ʵ����ӣ����������ʳ�ﻹ���óԵġ�
ǽ������һ�ݼ�Ŀ��(table)�����㻹���ȿ����ĺá�
����֮�����ʲô������(order)��\��\
LONG);

  set("item_desc", ([ /* sizeof() == 2 */
  "table" : "������\��\������order XXXX�����ȿɣ��ϰ�ᾡ�����ġ�\n
             A : ������          30  coins\n
             B : ����¯          70  coins\n
             C : ���ݴ����     100  coins\n
             D : ��½��\��\     150  coins\n
            ",
  ]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"r18",
  "east" : __DIR__"sr0",
  "north" : __DIR__"leerm",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "table" : "����࿴����Ҳ����Ƚϱ���ѽ��\n",
]));

  setup();
}
void init()
{
	add_action("do_order","order");
}
int do_order(string str)
{
 object me;

        me=this_player();
	if( str == "" )
	  return notify_fail("ι���������ʲô����ѽ��\n");
        switch(str)
        {
         case "A":
         { 
          if ((int)me->query("food") >= (int)me->max_food_capacity())
          {
            tell_object(me,"��������𣿻�������ɣ�.......\n");
            return 1;
          }
          if(!me->can_afford(30))
          {
           tell_object(me,"��԰���\��\�𣿴���Ǯ���ɡ�\n");
           return 0;
          }
          me->add("food",40);
          me->add("water",50);
          me->pay_money(30);
          tell_object(me,"һ�������ڵ��������������������ԵĲ����ֺ���\n");
          return 1;
         }
         case "B":
         { 
          if ((int)me->query("food") >= (int)me->max_food_capacity())
          {
            tell_object(me,"��������𣿻�������ɣ�.......\n");
            return 1;
          }
          if(!me->can_afford(70))
          {
           tell_object(me,"��԰���\��\�𣿴���Ǯ���ɡ�\n");
           return 0;
          }
          me->add("food",90);
          me->add("water",50);
          me->pay_money(70);
          tell_object(me,"һ¯�����ڵ������������������ԵĲ����ֺ���\n");
          return 1;
         }
         case "C":
         { 
          if ((int)me->query("food") >= (int)me->max_food_capacity())
          {
            tell_object(me,"��������𣿻�������ɣ�.......\n");
            return 1;
          }
          if(!me->can_afford(100))
          {
           tell_object(me,"��԰���\��\�𣿴���Ǯ���ɡ�\n");
           return 0;
          }
          me->add("food",100);
          me->add("water",110);
          me->pay_money(100);
          tell_object(me,"һ�������ڵ����ݴ���⽶�������������ԵĲ����ֺ���\n");
          return 1;
         }
         case "D":
         { 
          if ((int)me->query("food") >= (int)me->max_food_capacity())
          {
            tell_object(me,"��������𣿻�������ɣ�.......\n");
            return 1;
          }
          if(!me->can_afford(150))
          {
           tell_object(me,"��԰���\��\�𣿴���Ǯ���ɡ�\n");
           return 0;
          }
          me->add("food",150);
          me->add("water",150);
          me->pay_money(150);
          tell_object(me,"һ���׵ĺ�½��\��\��������������ԵĲ����ֺ���\n");
          return 1;
         }
        }
       return notify_fail("ι���������ʲô����ѽ��\n");
}