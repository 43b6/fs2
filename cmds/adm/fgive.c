// give.c
#include <carry.h>
//fixed by lum 7/11/1996 because ֮ǰ���������ļӷ��š�
// fund �޸ģ���������Я�����Խ�ʡ������ (8/15/1996)
inherit F_CLEAN_UP;
int do_give(object me,object obj,object who,int force);
 
void create() { seteuid(getuid()); }
 
int main(object me,string arg)
{
        string target,item,force;
        object obj, who,*inv,obj2;
        int i,amount,do_force;
 
        if (!NATURE_D->vision(me))
          return notify_fail("����������ڵģ�ʲôҲ������.\n");
 
        if(!arg) return notify_fail("��Ҫ��˭ʲô������\n");
        arg = lower_case(arg);
 
        if (sscanf (arg,"%s %s",force,item) == 2)
          if (force == "-f") {
            if (!wizardp(me)) force = 0;
          }
          else force = 0;
 
        if (force && force == "-f") do_force = 1;
 
        if( sscanf(arg,"%s to %s",item,target)==2
        || sscanf(arg,"%s %s",target,item)==2 );
        else return notify_fail("��Ҫ��˭ʲô������\n");
 
        if(!objectp(who = present(target,environment(me))) || !living(who))
                return notify_fail("����û������ˡ�\n");
 
        if (wizardp(me) && !wizardp(who) &&
          wizhood(me)!="(manager)" && wizhood(me) != "(admin)" && wizhood(me) != "(arch)")
        {
          return notify_fail("��ʦ���ܸ���Ҷ���\n");
        }
        if(sscanf(item,"%d %s",amount,item)==2) {
                if( !objectp(obj = present(item,me)) )
                        return notify_fail("������û������������\n");
     
                if(obj->query_temp("mdragon"))
      return notify_fail("ħ��װ���ѷֻ���,�����������ϲ��ܸ���\n");
                if( !obj->query_amount() )
                        return notify_fail( obj->name() + "���ܱ��ֿ����ˡ�\n");
 
                if( amount < 1 )
                        return notify_fail("����������������һ����\n");
                if( amount > obj->query_amount() )
                        return notify_fail("��û����ô���" + obj->name() + "��\n");
                else if( amount == (int)obj->query_amount() )
                        return do_give(me,obj,who,do_force);
                else {
                  obj->set_amount( (int)obj->query_amount() - amount );
                  obj2 = new(base_name(obj));
                  obj2->set_amount(amount);
                  return do_give(me,obj2,who,do_force);
                }
        }
 
        if (item=="all") {
                inv = all_inventory(me);
                for(i=0; i<sizeof(inv); i++) {
                        do_give(me,inv[i],who,do_force);
                }
                write("����.\n");
                if (userp(me)) me->save();
                if (userp(who)) who->save();
                return 1;
        }
 
        if(!objectp(obj = present(item,me)))
                return notify_fail("������û������������\n");
        return do_give(me,obj,who,do_force);
}
 
int do_give(object me,object obj,object who,int force)
{
  object        *light;
 
  int carry = sizeof(all_inventory(me));
  if( carry >= MAX_CARRY ) return notify_fail("�����ϵĶ���̫���ˡ�\n");
  if(!obj) return 1;
if( !force && (obj->query_temp("secured") || obj->query_temp("mdragon")) )
    return notify_fail ("�ⶫ�����ܸ���.\n");
     
if(obj->query("clan_name")&&obj->query("clan_name")!=who->query("clan/name"))
return notify_fail("���ɶ���ֻ�ܸ������ɵ��ˡ�\n");
  if( userp(who) && !interactive(who) )
    return notify_fail("��ֻ�ܰѶ����͸�������Ҳ��ݵ����\n");
if(obj->query_temp("focuskee")==1)
return notify_fail("�������������ס���ܸ��ˡ�\n");
  if( obj->move(who) ) {
    // ���
if (obj->query("id") != "lightfire") {
    if (obj->query("had_light")) {
        obj->delete("had_light");
        obj->delete("short");
        write (sprintf ("�����%s���˵�ʱ����%s%sҲ��������������\n",
          obj->name(),obj->query("unit"),obj->name()));
    }
}
 
    if (me->is_fighting()) me->start_busy(1);
    printf("���%sһ%s%s��\n",who->name(),obj->query("unit"),
    obj->name());
    message("vision",sprintf("%s����һ%s%s��\n",me->name(),
    obj->query("unit"),obj->name()),who );
    message("vision",sprintf("%s��%sһ%s%s��\n",me->name(),who->name(),
    obj->query("unit"),obj->name()),environment(me),({me,who}) );
    if (!userp(who)) {
      who->accept_object(me,obj);
      return 1;
    }
    else {
      me->save();
      who->save();
      return 1;
    }
  }
  else return 0;
}
 
int help(object me)
{
write(@HELP
ָ���ʽ : give <��Ʒ����> to <ĳ��>
      �� : give <ĳ��> <��Ʒ����>
ָ��˵�� :
           ���ָ��������㽫ĳ����Ʒ�����ˣ�
         ��Ȼ��������Ҫӵ��������Ʒ��
�����ο� :
           get��drop
HELP
    );
    return 1;
}
