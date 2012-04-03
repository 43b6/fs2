// drop.c
 
inherit F_CLEAN_UP;
 
int do_drop(object me, object obj);
 
int main(object me, string arg)
{
        object obj, *inv, obj2;
        int i, amount;
        string item;
 
        seteuid(getuid());
        if(!arg) return notify_fail("��Ҫ����ʲô������\n");
        arg = lower_case(arg);
 
        if(sscanf(arg, "%d %s", amount, item)==2) {
                if( !objectp(obj = present(item, me)) )
                        return notify_fail("������û������������\n");
                if( stringp(obj->query("no_drop")) )
                        return notify_fail( (string)obj->query("no_drop") );
                if( !obj->query_amount() )
                        return notify_fail( obj->name() + "���ܱ��ֿ�������\n");
                if( amount < 1 )
                        return notify_fail("����������������һ����\n");
                if( amount > obj->query_amount() )
                        return notify_fail("��û����ô���" + obj->name() + "��\n");
                else if( amount == (int)obj->query_amount() )
                        return do_drop(me, obj);
                else {
                        obj->set_amount( (int)obj->query_amount() - amount );
                        obj2 = new(base_name(obj));
                        obj2->set_amount(amount);
                        return do_drop(me, obj2);
                }
        }
 
        if(arg=="all") {
                inv = all_inventory(me);
                for(i=0; i<sizeof(inv); i++) {
                        do_drop(me, inv[i]);
                }
                write("Ok.\n");
                return 1;
        }
 
        if(!objectp(obj = present(arg, me)))
                return notify_fail("������û������������\n");
        return do_drop(me, obj);
}
 
int do_drop(object me, object obj)
{
  object        *light;
  int           no_drop;
  int           vis;
 
  vis = me->visible(me);
  notify_fail ("�㲻�ܶ��ⶫ��.\n");
  if (obj->query("no_drop") || obj->query_temp("secured")) return 0;
 
  if (obj->query("had_light")) {
        obj->delete("had_light");
        obj->delete("short");
       if ( obj->query("be_light") ) {
        obj->delete("be_light"); 
        obj->delete("light_up");  
        obj->set("name",obj->query("old_name") );
        obj->delete("old_name");     }  
        write (sprintf ("�����%s���ڵ��ϵ�ʱ����%s%sҲ��������������\n",
                obj->name(), obj->query("unit"), obj->name()));
  }
 
  if(obj->query_temp("focuskee")==1)
    return notify_fail("����ֱ�һ��������ס���޷��������¡�\n");
  if(obj->query("nodrop")==1)
  return notify_fail("��������Ѫ�в��ܶ��¡�\n");
  if (wizardp(me)) {
    if( obj->is_character() ) {
      if (obj->move(environment(me)) && vis)
        message_vision("$N��$n�ӱ��Ϸ������������ڵ��ϡ�\n", me, obj);
      else
        write ("�㽫"+obj->name(1)+"�ӱ��Ϸ������������ڵ��ϡ�\n");
    }
    else {
      if (vis)
        message_vision( sprintf("$N����һ%s$n���������Զ������ˡ�\n",
                                 obj->query("unit")), me, obj );
      else
        write ("�㶪��һ"+obj->query("unit")+obj->name(1)+"���������Զ������ˡ�\n");
      destruct(obj);
      if (obj) write("���޷���������������\n");
    }
    return 1;
  }
  else if (obj->move(environment(me))) {
    if( me->is_fighting() && userp(me) ) me->start_busy(1);
    if( obj->is_character() )
      message_vision("$N��$n�ӱ��Ϸ������������ڵ��ϡ�\n", me, obj);
    else {
      message_vision( sprintf("$N����һ%s$n��\n",       obj->query("unit")),
                      me, obj );
      // ���
      if (obj->query("had_light")) {
        write (sprintf ("������һ������%s%sҲ��������������\n",
          obj->query("unit"), obj->short()));
        obj->delete("short");
        obj->delete("had_light");
      }
      // ��ֵǮ�Ķ���
      if ( !obj->query("value") && !obj->value() ) {
        write("��Ϊ������������ֵǮ���������ǲ�����ע�⵽���Ĵ��ڡ�\n");
        destruct(obj);
      }
    }
    return 1;
  }
}
 
int help(object me)
{
        write(@HELP
ָ���ʽ : drop <��Ʒ����>
 
���ָ��������㶪������Я������Ʒ.
 
HELP
    );
    return 1;
}
