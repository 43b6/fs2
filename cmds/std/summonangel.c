//      ��ʹ�ٻ�

#include <ansi.h>
inherit F_CLEAN_UP;

int main(object me, string arg)
{
    object obj, angel;
    int wis, skill, i;
    object *attackers;
    obj = this_player();
    if(!wizardp(me)) return 0;
    if (obj->query("scores") < 100)
        return notify_fail("��ʹֻԸ��������ñ��Ե���\n");
/*
    if(environment(obj)->query("no_fight"))
        return notify_fail("�����н���޷��ٻ���ʹ\n");
*/
    attackers = obj->is_fighting();
    
    wis = (int)obj->query("int");
    skill = (int)obj->query_skill("summon");
    if(wis < 25)
        return  notify_fail("�����ǲ���, �޷��ٻ���ʹ\n");

    if((int)obj->query("atman") < 110)
        return  notify_fail("�����������\n");
    obj->add("atman",-100);
    write("��˵�� :����ʹѽ ! ������Ӷ�����֮����������һ��а��� !��\n");
    tell_room(environment(obj),obj->query_short()+"˵�� :����ʹѽ ! ������, ������Ӷ�����֮����������һ��а��� !��\n",({obj}));
    tell_room(environment(obj),HIY"�ڽ�ɫ��â��, һλ�Ķ�������ʹ���컺������\n"NOR,({}));
    skill = random(skill);
    if(skill < 20)
      angel = new("/u/a/anmy/npc/angel/angel1");
    else if(skill < 40)
      angel = new("/u/a/anmy/npc/angel/angel2");
    else if(skill < 60)
      angel = new("/u/a/anmy/npc/angel/angel3");
    else if(skill < 80)
      angel = new("/u/a/anmy/npc/angel/angel4");
    else angel = new("/u/a/anmy/npc/angel/angel5");
    angel->move(environment(obj));
    for(i=0;i<sizeof(attackers);i++) {
      if(attackers[i]->query("bellicosity") > 0) continue;
      angel->kill_ob(attackers[i],0);
    }
    obj->start_busy(3);
/*
    obj->improve_skill(skill,random( me->query("int")+
              obj->query_skill(skill,1)/10) ); */
      
   return 1;
}

