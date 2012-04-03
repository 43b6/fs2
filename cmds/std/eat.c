#include <ansi.h>
inherit F_CLEAN_UP;
 
int help();

int main(object me, string arg, int repeat)
{
  object  ob;
  int     max_food;
  int     i;

  seteuid(getuid(me));

  max_food = me->max_food_capacity();
  if (!arg)
    return help();
  if (!objectp(ob = present (arg, me)))
    return help();

  if (repeat <= 0) repeat = 1;

  for (i=0; i<repeat; i++) {
    if (stringp(ob->query ("ʳ��/���⺯��")))
      return call_other(ob, ob->query ("ʳ��/���⺯��"), me, arg);

    if (!ob->query ("ʳ��/ʣ")) {
      write ( ob->name() + "�Ѿ�ûʲô�óԵ��ˡ�\n");
      return 1;
    }

    if ((int)me->query ("food") >= max_food) {
      write ("���Ѿ���̫���ˣ���Ҳ�������κζ����ˡ�\n");
      return 1;
    }

    if( me->is_fighting() ) me->start_busy (2);
    ob->set ("value", 0);

    // This allows customization of drinking effect.
    if (ob->query ("get_poison"))
    {
      write ("���� ! ʳ�����ж� !\n");
      me->apply_condition (ob->query("get_poison"),
              ob->query("poison_power"));
    }
    me->add ("food", ob->query ("ʳ��/��Ӧ"));
    if (me->query ("food") >= max_food)
      me->set ("food", max_food);
    ob->add ("ʳ��/ʣ", -1);
    if( !ob->query ("ʳ��/ʣ") ) {
      message_vision("$N��ʣ�µ�" + ob->name() + "�Եøɸɾ�����\n", me);
      if( !ob->finish_eat() )
        destruct(ob);
      return 1;
    }
    else
      message_vision("$N����" + ob->name() + "ҧ�˼��ڡ�\n", me);
  }

  return 1;
}
 
int help()
{
        write(@HELP
ָ���ʽ : eat <ʳ������>
ʹ��˵�� :
        ��ָ����������Զ���, ����Լ���: eat leg
        ע��, ��Ե��ж�ʳ���!
�����ο� :
        drink
HELP
    );
    return 1;
}
