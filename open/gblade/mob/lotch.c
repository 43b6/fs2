//������

#include <ansi.h>
inherit ITEM;
int exp=0;
void create()
{
        set_name(HIB"������" NOR, ({"lotch"}));
        set("long",
                "�Ϲ����� -- ������ . ���� help lotch ��ѯ�÷� \n");
        set("unit", "��");
        /*
        set("value", 10000000);
        */
        set("weight",500);
        setup();
}

void init()
{
        if( this_player()==environment() )
                add_action("catch_enemy","catch");
                add_action("use_lotch","use");
                add_action("check_exp","check");
        add_action("help_lotch","help");
}


int catch_enemy(string str)
{
        object ob;
        int i, exp1 , exp2;

        if(!this_player()->query("quests/lotch") )
        return notify_fail("�㻹����ʹ�������� !\n");
        if(!str)
                return notify_fail("��Ҫץʲ ?\n");
        if( (int)this_player()->query("sen")<15)
                return notify_fail("��û���㹻�������������� \n");
        str=lower_case(str);
        if(!objectp(ob=present(str,environment(this_player()))))
                return notify_fail("û�������� !\n");
        if(userp(ob))
                return notify_fail("������ , �� player ҲҪץ ?\n");
// Ϊ�˱��� no heart ������������ս������ by swy
if( this_player()->is_fighting() )
return notify_fail("����ս���в���ʹ�á�\n");
//modify by Rong 85.4.6 ʹ�����������շ�����
if(!ob->is_character())
        return notify_fail("����������һ������: �ܱ�Ǹ,�ⶫ��û��������!!\n");
        
        if( (int) ob->query("max_kee")/2< (int) ob->query("kee"))
        {
                this_player()->add("sen",-1);
                return notify_fail("������Ȼ��������ʢ , ���޻��ɳ� !\n");
        }
        message_vision( sprintf(HIW"$N�ó������� ,���˼������� \n"NOR),this_player());
        exp1= (int)ob->query("combat_exp");
        exp2=(int)this_player()->query("combat_exp");
        if( random(exp2) > random(exp1)/2 )
        {
        exp = exp + exp1/2;
        message_vision( sprintf(HIC"����ɹ��İ�$N�ս�����\n"NOR),ob);
        destruct(ob);
        this_player()->add("sen",-15);
        return 1;
        }
        message_vision( sprintf(HIB"���$N��ǧ��һ��֮�� , ���˿�ȥ\n"NOR),ob);
        this_player()->add("sen",-1);
        return 1;
       
}
int check_exp(string str)
{
string line;
        if(!str || str!="lotch")
        return notify_fail("��Ҫ���� ?\n");
        if(!this_player()->query("quests/lotch") )
        return notify_fail("�㻹����ʹ�������� !\n");
        line=sprintf("��������������%d��\n",exp);
        write(line);
        return 1;
}
int use_lotch(string str)
{
        int exp3;
        object ob;
        if(!str || str!="lotch")
        return notify_fail("��Ҫʹ��ʲô���� ?\n");
        if(!this_player()->query("quests/lotch"))
        return notify_fail("�㻹����ʹ�������� \n");
        if(!this_player()->is_fighting())
        return notify_fail("ֻ����ս���в��ܷų���ħ !\n");
 if(environment(this_player())->query("no_scale")==1)
return notify_fail("�˴��� pkla ������ʹ�á�\n");
        if(exp==0)
        return notify_fail("���ں������κ����� !\n");
        if(exp < 300)
        return notify_fail("���ڵ���������!!!�޷��ų���ħ\n");
        if((int)this_player()->query("sen")<30)
                return notify_fail("��ľ��������� !\n");
        message_vision(sprintf(HIW"$N�ó��������� , ��������ħ�ͳ� \n\n"NOR),this_player());
        exp3=this_player()->query("combat_exp");
        this_player()->add("sen",-30);

      if(exp/5 > exp3)
        {
        if(exp3*5<500)
            { ob=new("/open/gblade/mob/test1.c");
            exp=exp-300; }
        if(exp3*5<2000&&exp3*5>=500)
            { ob=new("/open/gblade/mob/test2.c");
            exp=exp-500; }
        if(exp3*5<5000&&exp3*5>=2000)
            { ob=new("/open/gblade/mob/test3.c");
            exp=exp-2000; }
        if(exp3*5<10000&&exp3*5>=5000)
           {  ob=new("/open/gblade/mob/test4.c");
            exp=exp-5000; }
        if(exp3*5<15000&&exp3*5>=10000)
           { ob=new("/open/gblade/mob/test5.c");
            exp=exp-10000;}
        if(exp3*5<20000&&exp3*5>=15000)
           { ob=new("/open/gblade/mob/test6.c");
            exp=exp-15000;}
        if(exp3*5<30000&&exp3*5>=20000)
           { ob=new("/open/gblade/mob/test7.c");
            exp=exp-20000 ;}
        if(exp3*5<40000&&exp3*5>=30000)
           { ob=new("/open/gblade/mob/test8.c");
            exp=exp-30000 ;}
        if(exp3*5<50000&&exp3*5>=40000)
           { ob=new("/open/gblade/mob/test9.c");
            exp=exp-40000;}
        if(exp3*5<100000&&exp3*5>=50000)
           { ob=new("/open/gblade/mob/test10.c");
            exp=exp-50000;}
        if(exp3*5<150000&&exp3*5>=100000)
           { ob=new("/open/gblade/mob/test11.c");
            exp=exp-100000;}
        if(exp3*5<200000&&exp3*5>=150000)
           { ob=new("/open/gblade/mob/test12.c");
            exp=exp-150000;}
        if(exp3*5<250000&&exp3*5>=200000)
           { ob=new("/open/gblade/mob/test13.c");
            exp=exp-200000;}
        if(exp3*5<300000&&exp3*5>=250000)
           { ob=new("/open/gblade/mob/test14.c");
            exp=exp-250000;}
        if(exp3*5<350000&&exp3*5>=300000)
           { ob=new("/open/gblade/mob/test15.c");
            exp=exp-300000;}
        if(exp3*5<400000&&exp3*5>=350000)
           { ob=new("/open/gblade/mob/test16.c");
            exp=exp-350000;}
        if(exp3*5<450000&&exp3*5>=400000)
           { ob=new("/open/gblade/mob/test17.c");
            exp=exp-400000;}
        if(exp3*5<500000&&exp3*5>=450000)
           { ob=new("/open/gblade/mob/test18.c");
            exp=exp-450000;}
        if(exp3*5<750000&&exp3*5>=500000)
           { ob=new("/open/gblade/mob/test19.c");
            exp=exp-500000;}
        if(exp3*5<1000000&&exp3*5>=750000)
           { ob=new("/open/gblade/mob/test20.c");
            exp=exp-750000;}
        if(exp3*5<1250000&&exp3*5>=1000000)
           { ob=new("/open/gblade/mob/test21.c");
            exp=exp-1000000;}
        if(exp3*5<1500000&&exp3*5>=1250000)
           { ob=new("/open/gblade/mob/test22.c");
            exp=exp-1250000;}
        if(exp3*5<2000000&&exp3*5>=1500000)
           { ob=new("/open/gblade/mob/test23.c");
            exp=exp-1500000;}
        if(exp3*5<2500000&&exp3*5>=2000000)
           { ob=new("/open/gblade/mob/test24.c");
            exp=exp-2000000;}
        if(exp3*5>=2500000)
           { ob=new("/open/gblade/mob/test25.c");
            exp=exp-2500000;}

        }
       else
        {
          if(exp<500) 
            { ob=new("/open/gblade/mob/test1.c");
             exp=exp-300;}
        if(exp<2000&&exp>=500)
            { ob=new("/open/gblade/mob/test2.c");
             exp=exp-500;}
        if(exp<5000&&exp>=2000)
            { ob=new("/open/gblade/mob/test3.c");
             exp=exp-2000;}
        if(exp<10000&&exp>=5000)
            { ob=new("/open/gblade/mob/test4.c");
             exp=exp-5000;}
        if(exp<15000&&exp>=10000)
            { ob=new("/open/gblade/mob/test5.c");
             exp=exp-10000;}
        if(exp<20000&&exp>=15000)
            { ob=new("/open/gblade/mob/test6.c");
             exp=exp-15000;}
        if(exp<30000&&exp>=20000)
            { ob=new("/open/gblade/mob/test7.c");
             exp=exp-20000;}
        if(exp<40000&&exp>=30000)
            { ob=new("/open/gblade/mob/test8.c");
             exp=exp-30000;}
        if(exp<50000&&exp>=40000)
            { ob=new("/open/gblade/mob/test9.c");
             exp=exp-40000;}
        if(exp<100000&&exp>=50000)
            { ob=new("/open/gblade/mob/test10.c");
             exp=exp-50000;}
        if(exp<150000&&exp>=100000)
            { ob=new("/open/gblade/mob/test11.c");
             exp=exp-100000;}
        if(exp<200000&&exp>=150000)
            { ob=new("/open/gblade/mob/test12.c");
             exp=exp-150000;}
        if(exp<250000&&exp>=200000)
            { ob=new("/open/gblade/mob/test13.c");
             exp=exp-200000;}
        if(exp<300000&&exp>=250000)
            { ob=new("/open/gblade/mob/test14.c");
             exp=exp-250000;}
        if(exp<350000&&exp>=300000)
            { ob=new("/open/gblade/mob/test15.c");
             exp=exp-300000;}
        if(exp<400000&&exp>=350000)
            { ob=new("/open/gblade/mob/test16.c");
             exp=exp-350000;}
        if(exp<450000&&exp>=400000)
            { ob=new("/open/gblade/mob/test17.c");
             exp=exp-400000;}
        if(exp<500000&&exp>=450000)
            { ob=new("/open/gblade/mob/test18.c");
             exp=exp-450000;}
        if(exp<750000&&exp>=500000)
            { ob=new("/open/gblade/mob/test19.c");
             exp=exp-500000;}
        if(exp<1000000&&exp>=750000)
            { ob=new("/open/gblade/mob/test20.c");
             exp=exp-750000;}
        if(exp<1250000&&exp>=1000000)
            { ob=new("/open/gblade/mob/test21.c");
             exp=exp-1000000;}
        if(exp<1500000&&exp>=1250000)
            { ob=new("/open/gblade/mob/test22.c");
             exp=exp-1250000;}
        if(exp<2000000&&exp>=1500000)
            { ob=new("/open/gblade/mob/test23.c");
             exp=exp-1500000;}
        if(exp<2500000&&exp>=2000000)      
            { ob=new("/open/gblade/mob/test24.c");
             exp=exp-2000000;}
        if(exp>=2500000)
            { ob=new("/open/gblade/mob/test25.c");
             exp=exp-2500000;}

       }

        ob->move(environment(this_player()));
        ob->invocation(this_player());
        return 1;
}

int help_lotch(string str)
{
        if(str!="lotch")  return 0;
        write(@HELP
�������ɽ���ս������������֮����������� , ��Ϊ����
�ڶ�սʱ�ֿɽ����������ͳ� , ��Ϊ���� , ����ħ����
����һ�� , ����������һֱ�ۻ� , ������ӵ������ , ��
�ɷų���ħ , �ɷų�֮��ħ�������Ϊʹ����֮�屶 , ��
�ű���֮�ɳ� , ��������֮��ħ��������ͬ !

ָ��:
        catch xxx  :����ս��֮�����������
        check lotch:��ѯ��������
        use lotch  :�ų���ħ , ��Ϊ����
HELP
        );
        return 1;
}
