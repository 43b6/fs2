// made by ccat
// Et-sword.c by Casey
// super weapon �޸����԰ٱ���������콣 by bss
#include <ansi.h>
#include <weapon.h>
inherit EQUIP;
int weapon_type=0,sp;
object weapon,user;
void create()
{
     set_name(HBMAG+HIY"����ű�"NOR,({"super weapon","weapon","super"}) );
     set_weight(15000);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
     if( clonep() )
               set_default_object(__FILE__);
     else {
            set("long","�Ϲ�ʱ��������������������������Ա任�ɸ�������ı���.\n"
                  +"( change <type>, ex: change sword )\n"
                  +"( type : unarmed sword blade whip dagger stabber )\n");
            set("unit", "��");
            set("value",2000);
            set("material","steal");
           }
        setup();
}
void init()
{
        add_action("do_change","change");
        add_action("do_wield","wield");
        add_action("do_unwield","unwield");
}
int do_change(string str)
{
        object me=this_player();
   switch(str)
   {
     case "unarmed":
           weapon_type=1;
           set("skill_type", "unarmed");
           set_name(HIY"��������ӡ"NOR,({"rulai hand","hand"}));
           write(HBMAG+HIY"����ű�"NOR"��ʼ������ı仯.\n"HBMAG+HIY"����ű�"NOR"������һ˫"HIY"��������ӡ"NOR"\n");
           set("weapon_prop/unarmed", 10);
//           init_unarmed(120);
           set("weapon_prop/damage",120);
           break;
     case "sword":
           weapon_type=2;
           set("skill_type", "sword");
           set_name(HIY"������"NOR,({"dragon sword","sword"}));
           write(HBMAG+HIY"����ű�"NOR"��ʼ������ı仯.\n"HBMAG+HIY"����ű�"NOR"������һ��"HIY"������"NOR".\n");
           set("weapon_prop/sword", 10);
//        init_sword(120);
           set("weapon_prop/damage",120);
           break;
     case "blade":
           weapon_type=3;
           set("skill_type", "blade");
           set_name(HIR"����"HIY"��"NOR,({"sun_moon blade","blade"}));
           write(HBMAG+HIY"����ű�"NOR"��ʼ������ı仯.\n"HBMAG+HIY"����ű�"NOR"������һ��"HIR"����"HIY"��"NOR"\n");
           set("weapon_prop/blade", 10);
//        init_sword(120);
           set("weapon_prop/damage",120);
           break;
     case "dagger":
           weapon_type=4;
           set("skill_type", "dagger");
           set_name(HIC"���"NOR,({"moon dagger","dagger"}));
           write(HBMAG+HIY"����ű�"NOR"��ʼ������ı仯.\n"HBMAG+HIY"����ű�"NOR"������һ˫"HIC"���"NOR".\n");
           set("weapon_prop/dagger",10);
//        init_dagger(120);
           set("weapon_prop/damage",120);
           break;
     case "whip":
           weapon_type=5;
           set("skill_type", "whip");
           set_name(HIM"���񾧱�"NOR,({"gem whip","whip"}));
           write(HBMAG+HIY"����ű�"NOR"��ʼ������ı仯.\n"HBMAG+HIY"����ű�"NOR"������һ��"HIM"���񾧱�"NOR".\n");
           set("weapon_prop/whip", 10);
//        init_whip(120);
           set("weapon_prop/damage",120);
           break;
     case "stabber":
     case "fan":
           weapon_type=6;
           set("skill_type", "stabber");
           set_name(HIR"��������"NOR,({"yengyang fan","fan"}) );
           write(HBMAG+HIY"����ű�"NOR"��ʼ������ı仯.\n"HBMAG+HIY"����ű�"NOR"�����һ֧"HIR"��������"NOR".\n");
           set("weapon_prop/stabber", 10);
//        init_stabber(120);
           set("weapon_prop/damage",120);
           break;
     default:
           write(HBMAG+HIY"����ű�"NOR"����ұ�,�����޷������Ҫ�Ķ���.\n");
   }
    me->reset_action();
     return 1;
}
int do_wield(string str)
{
        user = this_player(); // ȡ��ʹ����
        weapon=this_object();
        sp=user->query("spi",1);
//        ::wield();      //��Ϊ�Ѿ��趨��no_drop��....���Կ��Բ�����������
        if(str=="all" ||
          (str=="rulai hand" && weapon_type==1) ||
          (str=="hand" && weapon_type==1) ||
          (str=="dragon sword" && weapon_type==2) ||
          (str=="sword" && weapon_type==2) ||
          (str=="sun_moon blade" && weapon_type==3) ||
          (str=="blade" && weapon_type==3) ||
          (str=="moon dagger" && weapon_type==4) ||
          (str=="dagger" && weapon_type==4) ||
          (str=="gem whip" && weapon_type==5) ||
          (str=="whip" && weapon_type==5) ||
          (str=="yengyang fan" && weapon_type==6) ||
          (str=="fan" && weapon_type==6))
        {
        switch(weapon_type)
        {
                case 1:
                        message_vision("$N��$n�ӻ���ȡ���������ϣ�ֻ��$N������¤����һƬ�����Ļƹ��У�$N��������ǿ�ˡ�\n"NOR,user,weapon);
                        break;
                case 2:
                        message_vision("$N���һ��:���������ʡ���$n�������³������Ķ�������$Nȫ��\n",user,weapon);
                        break;
                case 3:
                        message_vision("$N����������ɲ�Ǽ�$n�ĵ��ʷ���ҫ�۽�⣬$N����һ�Σ�$n������!!!\n",user,weapon);
                        break;
                case 4:
                        message_vision(HIY"$N˫�ֺ�Ȼһ����$n"HIY"�����ħ����ĳ�����$N���ϡ�\n"NOR,user,weapon);
                        break;
                case 5:
                        message_vision("$N����������������$n��$nɢ�������˲�������Ϲ⡣\n"NOR,user,weapon);
                        break;
                case 6:
                        message_vision("$N�ó������·����С$n�������ϣ�����һ����һֻ���ж��߳���$n������$N�����ϡ�\n"NOR,user,weapon);
                        break;
                default:
                        message_vision("��$N���ڵ���̬����װ��������change��װ����\n",weapon);
                        return 1;
                        break;
        }
        user->set_temp("wield_schange_weapon",1);
        set_heart_beat(1);
        }
        else
        {
        return notify_fail("��Ҫװ��ɶ��???\n");
        }
}
int do_unwield(string str)
{
        if( query("equipped") )
        {
        if(str=="all" ||
          (str=="rulai hand" && weapon_type==1) ||
          (str=="hand" && weapon_type==1) ||
          (str=="dragon sword" && weapon_type==2) ||
          (str=="sword" && weapon_type==2) ||
          (str=="sun_moon blade" && weapon_type==3) ||
          (str=="blade" && weapon_type==3) ||
          (str=="moon dagger" && weapon_type==4) ||
          (str=="dagger" && weapon_type==4) ||
          (str=="gem whip" && weapon_type==5) ||
          (str=="whip" && weapon_type==5) ||
          (str=="yengyang fan" && weapon_type==6) ||
          (str=="fan" && weapon_type==6))
        {
        switch(weapon_type)
        {
                case 1:
                        message_vision("$N�Ѵ������ϵ�$nȡ�£������֮������������\n"NOR,user,weapon);
                        break;
                case 2:
                        message_vision("$N���һ��:���������ʡ���$n���������졣\n",user,weapon);
                        break;
                case 3:
                        message_vision("$N������$n������һ�ף�$n��ƫ���е�������ڡ�\n",user,weapon);
                        break;
                case 4:
                        message_vision(HIY"$N����һ����$n"HIY"����ʧ�ˡ�\n"NOR,user,weapon);
                        break;
                case 5:
                        message_vision("$N��$n���²������䡣\n"NOR,user,weapon);
                        break;
                case 6:
                        message_vision("$N����$n����һ������ԭ���ж��߳��Ĵ����ӱ����ֻ�ж��糤��С���ӡ�\n"NOR,user,weapon);
                        break;
        }
        user->delete_temp("wield_schange_weapon");
        set_heart_beat(0);
        }
        else
        {
        return 0;
        }
        }
}
void heart_beat()
{
  object *enemy,who,ob;
  int i,j;

 if( !objectp(user) )
 {
    set_heart_beat(0);
    return;
 }

 if( user->is_fighting() && query("equipped") && user->query_temp("wield_schange_weapon") )
 {
    if( random(sp+100)> 100 )
    {
       enemy=user->query_enemy();
       i=random(sizeof(enemy));
       ob=enemy[i]->query_temp("weapon");
       if( !ob || random(10) > 6 )
       {
         message_vision(BLINK+HIY"$NͻȻ�е���$n"BLINK+HIY"��������һ����������������ѵ�ʹ��������!!!\n"NOR
         ,user,weapon);

         for(j=0;j<=2+random(3);j++)
           COMBAT_D->do_attack(user,enemy[i],user->query_temp("weapon"),2);
         return;
       }

 if( environment(user) == environment(enemy[i]) )
        if(!enemy[i]->query_temp("wield_schange_weapon"))
        if((userp(enemy[i]) && random(10) > 5) ||
          (!userp(enemy[i]) && random(10) > 8)  )
        {
          ob->unequip();
          message_vision(HIC"��Ȼһ�������������"+weapon->query("name")+HIC"���,������$N��"+ob->query("name")+HIC"
ֻ�����ƨ�ڵ�һ����"+ob->query("name")+HIC"��Ȼ����!!!\n"
NOR,enemy[i]);
          if( !ob->query("bad"))
          {
            ob->set("name", "(�ϻ�)" + ob->query("name"));
             ob->set("bad",1);
          }

          ob->set("value",1);
          ob->set("weapon_prop/damage",0);
          ob->move(environment(enemy[i]));
          enemy[i]->rest_action();
          enemy[i]->delete_temp("wield_schange_weapon");
          }
         else
         {
          if(ob->query("bad1"))
          {
          ob->unequip();
          message_vision(HIM"��Ȼһ�����۵��Ϲ���"+weapon->query("name")+HIM"������$N��"+ob->query("name")+HIM"��
ԭ���Ѿ������ѷ��"+ob->query("name")+HIM"��Ȼ��ʼ����!!!��$N��ȫ���������Լ�
���۾������˲��ã�"+ob->query("name")+HIM"��ȫ����ʧ�����֮����!!!\n"NOR,enemy[i]);
          destruct(ob);
          message_vision(BLINK+HIY"\n$N�ۿ��������ˣ��ܲ�����Ķ�$n"BLINK+HIY"�������ҵĹ���!!!\n"NOR,user,enemy[i]);
          call_out("quick_combat",2,enemy[i]);
          }
          if(ob)
          {
          ob->unequip();
          message_vision(HIG"��Ȼһ��������̹���"+weapon->query("name")+HIG"������$N��"+ob->query("name")+HIG"��
$N��������Լ�æ��"+ob->query("name")+HIG"��أ���ϧ����һ����"+ob->query("name")+HIG"
���̹������������ֻ������˻����һ��"+ob->query("name")+HIG"��Ȼ�����������ѷ�!!!\n"NOR,enemy[i]);
          }
          if( !ob->query("bad1"))
          {
            ob->set("name", "(����)" + ob->query("name"));
            ob->set("bad1",1);
          }
          if( ob->query("weapon_prop/damage") > 10 )
          {
            ob->add("weapon_prop/damage",-10);
          }
          else
            ob->set("weapon_prop/damage",0);
          ob->wield();
        }
    }
  }

    return;
}
int quick_combat(object ob)
{
        int j;
         for(j=0;j<=2+random(3);j++)
           if(ob)
           COMBAT_D->do_attack(user,ob,user->query_temp("weapon"),2);
         return 1;
}
int query_autoload() { return 1; }
