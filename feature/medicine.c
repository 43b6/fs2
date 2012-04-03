// medicine.c
// �������� by chan
// �������������ⶾ����Ѫʧ����״̬(����....��)������ҩ��
// ��kee > force = atman = mana > dark_poison = five_poison =
// flower_poison = rose_poison = snake_poison > burn = blade = u-stial =
// cold = star-stial = hart
// con (����)�Ĳ���Ҳ��ҩ���й�
#include <ansi.h>
#include <dbase.h>
#include <name.h>
inherit F_GUILDCMDS;
inherit COMBINED_ITEM;
inherit F_CONDITION;
void init()
{
        add_action("do_eat", "eat");
        add_action("do_apply","apply");
}
int do_eat(string arg)
{
        object ob,me=this_player();
        int medicine_power,tmp,player_con=me->query("con"),power,value;//�������й�

        string TYPE;
        if( !arg )                              return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )             return 0;
        if( ob != this_object() )               return 0;
        if( me->query_temp("unconcious") )      return 0;
        medicine_power = ob->query("medicine_power");
        TYPE = ob->query("cure_"+ob->query("cure_type")+"_type");
        if( ob->query("cure_type")=="outheal")
                return notify_fail("����ҩ������(apply)�����ܳԡ�\n");
        if( me->is_busy() )
                return notify_fail("����һ��������û����ɡ�\n");
        switch( ob->query("cure_type") )
        {
        case "poison" :        //�ⶾ //һֻֻ�ܽ�һ��״̬��......
                player_con=player_con*3;
                power= ob->query("medicine_sick"); //ҩ�Ե�ֵ
                power= power-player_con;
                 if(power > 40)
                    power = 40;
                me->add( "status",power);
                tmp=me->query("status");
                if( tmp >= 1000 )
                {
                        write("���ҩ����, ������ܲ�ס���ε��ˡ�\n");
                        me->unconcious();
                }
                else
                {
                        if( tmp < 400 )
                         tmp = 0;
                        else
                         tmp-=400;
                  if(me->query_condition(TYPE))
                   {
                        me->apply_condition(TYPE,me->query_condition(TYPE)-medicine_power);
                        if( me->query_condition(TYPE) < 0 )
                                me->clear_condition(TYPE);
                   }
                  else
                  return notify_fail("��û�ж��������ҩ ?\n");
                }
                break;
        case "heal" :      //kee(1)�󻹵���С������
                player_con=player_con*3;
                power= ob->query("medicine_sick"); //ҩ�Ե�ֵ
                power= power-player_con;
                 if(power > 40)
                    power = 40;
                me->add( "status",power);
                tmp=me->query("status");
                if( tmp >= 1000 )
                {
                        write("���ҩ����, ������ܲ�ס���ε��ˡ�\n");
                        me->unconcious();
                }
                else
                {
                        if( tmp < 400 )         tmp = 0;
                        else                    tmp-=400;
                        me->receive_heal(TYPE,
                        medicine_power*( 1000-tmp )/1000+random(10)-5);
                }
                me->add_temp("fight",1);
                break;
        case "heal_kee" :      //kee(2)���鵤
                player_con=player_con*2;
                power= ob->query("medicine_sick"); //ҩ�Ե�ֵ
                power= power-player_con;
                 if(power > 70)
                    power = 70;
                me->add( "status",power);
                tmp=me->query("status");
                if( tmp >= 1000 )
                {
                        write("���ҩ����, ������ܲ�ס���ε��ˡ�\n");
                        me->unconcious();
                }
                else
                {
                        if( tmp < 400 )         tmp = 0;
                        else                    tmp-=400;
                        value=me->query("max_kee");
                        me->set("kee",value);
                }
                me->add_temp("fight",1);
                break;
        case "force" :      //force ѩ����
                player_con=player_con*3;
                power= ob->query("medicine_sick"); //ҩ�Ե�ֵ
                power= power-player_con;
                 if(power > 40)
                    power = 40;
                me->add( "status",power);
                tmp=me->query("status");
                if( tmp >= 1000 )
                {
                        write("���ҩ����, ������ܲ�ס���ε��ˡ�\n");
                        me->unconcious();
                }
                else
                {
                        if( tmp < 400 )         tmp = 0;
                        else                    tmp-=400;
                        me->add("force",500);
                        value=me->query("max_force");
                        if(me->query("force") > value)
                          me->set("force",value);
                }
                me->add_temp("fight",1);
                break;
        case "atman" :      //atman ̫������
                player_con=player_con*3;
                power= ob->query("medicine_sick"); //ҩ�Ե�ֵ
                power= power-player_con;
                 if(power > 40)
                    power = 40;
                me->add( "status",power);
                tmp=me->query("status");
                if( tmp >= 1000 )
                {
                        write("���ҩ����, ������ܲ�ס���ε��ˡ�\n");
                        me->unconcious();
                }
                else
                {
                        if( tmp < 400 )         tmp = 0;
                        else                    tmp-=400;
                        me->add("atman",300);
                        value=me->query("max_atman");
                        if(me->query("atman") > value)
                          me->set("atman",value);
                }
                me->add_temp("fight",1);
                break;
        case "mana" :      //mana �Žڷ�����
                player_con=player_con*3;
                power= ob->query("medicine_sick"); //ҩ�Ե�ֵ
                power= power-player_con;
                 if(power > 40)
                    power = 40;
                me->add( "status",power);
                tmp=me->query("status");
                if( tmp >= 1000 )
                {
                        write("���ҩ����, ������ܲ�ס���ε��ˡ�\n");
                        me->unconcious();
                }
                else
                {
                        if( tmp < 400 )         tmp = 0;
                        else                    tmp-=400;
                        me->add("mana",300);
                        value=me->query("max_mana");
                        if(me->query("mana") > value)
                          me->set("mana",value);
                }
                me->add_temp("fight",1);
                break;
        case "all_atats" :      //all_stats ���鵤 �������״̬
                player_con=player_con*1;
                power= ob->query("medicine_sick"); //ҩ�Ե�ֵ
                power= power-player_con;
                 if(power > 80)
                    power = 80;
                me->add( "status",power);
                tmp=me->query("status");
                if( tmp >= 1000 )
                {
                        write("���ҩ����, ������ܲ�ס���ε��ˡ�\n");
                        me->unconcious();
                }
                else
                {
                        if( tmp < 400 )         tmp = 0;
                        else                    tmp-=400;
                        TYPE="burn";
                        me->clear_condition(TYPE);     //����
                        TYPE="blade";
                        me->clear_condition(TYPE);     //����
                        TYPE="u-stial";
                        me->clear_condition(TYPE);     //����
                        TYPE="cold";
                        me->clear_condition(TYPE);     //����
                        TYPE="hart";
                        me->clear_condition(TYPE);     //����
                        TYPE="star-stial";
                        me->clear_condition(TYPE);     //����
                        TYPE="blockade";
                        me->clear_condition(TYPE);     //Ѩ������
                }
                me->add_temp("fight",1);
                break;
        case "all_poison" :      //all_poison ���鵤
                player_con=player_con*2;
                power= ob->query("medicine_sick"); //ҩ�Ե�ֵ
                power= power-player_con;
                 if(power > 70)
                    power = 70;
                me->add( "status",power);
                tmp=me->query("status");
                if( tmp >= 1000 )
                {
                        write("���ҩ����, ������ܲ�ס���ε��ˡ�\n");
                        me->unconcious();
                }
                else
                {
                        if( tmp < 400 )         tmp = 0;
                        else                    tmp-=400;
                        TYPE="five_poison";
                        me->clear_condition(TYPE);
                        TYPE="rose_poison";
                        me->clear_condition(TYPE);
                        TYPE="dark_poison";
                        me->clear_condition(TYPE);
                        TYPE="fire_poison";
                        me->clear_condition(TYPE);
                        TYPE="snake_poison";
                        me->clear_condition(TYPE);
                        TYPE="flower_poison";
                        me->clear_condition(TYPE);
                }
                me->add_temp("fight",1);
                break;
        case "sick" :
                me->add("status",-medicine_power);
                if( me->query("status") < 0 )
                        me->set("status",0);
                break;
        default :
                error("F_MEDICINE:û������ cure_type��\n");
        }
        message_vision((query("eat_msg")?query("eat_msg"):
        "[32m$N������$n֮�󣬹���һ�ᣬ���Ͽ������ö��ˡ�[0m\n"),me,ob);
        add_amount(-1);
        return 1;
}

int do_apply(string arg)
{
        string ob_name,target_name,TYPE;
        object me=this_player();
        object ob,target;
        if( !arg )                      return 0;
        if( me->query_temp("unconcious") )      return 0;
        arg=lower_case(arg);
        if( sscanf(arg, "%s at %s", ob_name, target_name)==2 )
        {
          if( !target = present(target_name,environment(me)) )
            return notify_fail("����û�� " + target_name + "��\n");
        }
        else
        {
          ob_name=arg;
          target=me;
        }
        if( !ob = present(ob_name,me) ) return 0;
        if( ob != this_object() )       return 0;
        if( target->query_temp("medicine/bandaged") )
          return notify_fail("���Ƚ������������Ϳҩ��\n");
        if( ob->query("cure_type")!="outheal")
          return notify_fail("����ҩ�����������\n");
        TYPE=ob->query("cure_heal_type");
        if( !target->is_character() || target->is_corpse() )
          return notify_fail("�����һ�㣬�ǲ����ǻ��\n");
        if( target->query(TYPE) >= target->query("max_"+TYPE) )
          return notify_fail((target=me?"��":target->name())+"��û�����Ե��˿ڡ�\n");
        if( me->is_fighting() || target->is_fighting() )
          return notify_fail("ս�����޷���ҩ��\n");
        message_vision(
        "[32m$Nϸ�ĵİ�$n����"+ (target==me?"�Լ�":target->name()) +"�����ϡ�[0m\n" ,me,ob);
        target->set_temp("medicine/plaster_power",ob->query("medicine_power"));
        target->set_temp("medicine/plaster_times",ob->query("medicine_times"));
        target->set_temp("medicine/type",TYPE);
        add_amount(-1);
        return 1;
}
