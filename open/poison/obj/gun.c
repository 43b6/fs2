#include <mudlib.h>
#include <ansi.h>

inherit ITEM;

void create()
{
  set_name( HIC"Զ�̾ѻ�ǹ"NOR , ({"Kill Gun" , "gun"}));
  set("long",
      "רΪԶ�̾ѻ����, ���������, ���оѻ�����ʹ�á�\n");
  set_weight(1);
  set("unit", "ͦ");
  seteuid(getuid());
}

void init()
{
  add_action("fire", "shot");
}

int query_auto_load()
{
return 1;
}

int fire(string str)
{
  object target,targetenv;
  
 if(this_player()->query("id") !="ranko")
  return notify_fail("�㲻��ʹ����ͦ��Ҫ�߶ȼ�����ǹ��\n");
  if(!str || str == "") 
    {
      write(HIW"��������һǹ�����Ե���, ������ǹ��������ѵ�״����\n"NOR);
      tell_room(environment(this_player()), HIC+this_player()->query("name")
                +HIW"����ѻ�ǹ������һǹ, ����������Ҫ�������ˡ�\n"NOR,
                ({this_object(), this_player()}));
      return 1;
    }
  target=present(str,environment(this_player()));
  if(!target) target = find_living(str);
  if(!target) {
  write(HIC+"������ۣ������Ŀ���������\n"+NOR);
  return 1;}
  targetenv=environment(target);
  
  
  if(target != this_player())
   write( HIW"����׼"HIC + (string)target -> query("name") + HIW"��ü�Ļ���һ��"
         + ", "NOR + RED"׼ȷ�عᴩ�������Դ���\n"NOR );
  else
  {
  write("Զ�̾ѻ�ǹ����������ɱ��\n");
  return 1;
  }
  
  tell_room(environment(this_player()),""+HIC
            +(string)this_player()->query("name")
            +HIW"����ѻ�ǹ, ��׼"HIC + (string)target -> query("name")
            +HIW"��ü��׼ȷ�ط���һ���ӵ���\n"NOR , ({this_player() , target}));

  tell_room(environment(target) , HIW"��Ȼһ��ǹ��, ֻ��һ���ӵ�׼ȷ�عᴩ��"HIC
            + (string)target -> query("name")
            + HIW"�Ķ�ͷ�����룡\n"NOR , ( { this_player() , target } ) );
     
  tell_object(target,
              HIW"��Ȼһ��ǹ��, һ���ӵ��Ѿ��ᴩ����Ķ�ͷ�����룡\n"NOR +
              "( ��"+RED"���˹��أ��Ѿ�������в�����ʱ�����ܶ�����"NOR
              +" )\n");
  target -> set("env/immortal" , 0);
  this_object() -> destruct();
  target -> die();
   
  return 1;
}


