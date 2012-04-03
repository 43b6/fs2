// go.c

#include <ansi.h>

inherit DIR_D;

varargs int main(object me, string arg, int repeat)
{
        string mout, min, dir,array_use, go="��", path, player1, player2;
        object env, obj, horse, rider, who;
        mapping exit;
        object *member,*enemy;
        int i, brief,exit_number,j,mob_number=0, rank,flag;

        seteuid(getuid(me));

	if( !arg )
		return notify_fail( "��Ҫ���ĸ�������?\n" );
	if( arg == "look" )
		return 0;

	env = environment(me);
/*	if( !env ) {
		write( "����������Ư���, ����Ҳȥ���ˡ�\n" );
		return 1;
	}
*/
        arg = abbrdir(arg);
        dir = cdir(arg);
    if(!env->query("exits")) 
      return notify_fail("��Ҫȥ����??\n");
    if ( !mapp(exit = env->query("exits"))){
		if (repeat>=1) me->force_me("look");
		return 0;
	}
	if ( me->query_temp("��׼��") )
          return notify_fail("�����ڲ������ƶ���\n");

    if (undefinedp(exit[arg])){
        if (repeat>=1) me->force_me("look");
        return 0;
    }
	if(exit[arg][sizeof(exit[arg])-2..sizeof(exit[arg])-1]!=".c")
		exit[arg]+=".c";
//        if(geteuid(me)=="bss") printf("%s\t%d\n",exit[arg],file_size(exit[arg]));
    if( file_size(exit[arg]) < 1 && !wizardp(me) )
    {
        printf("%s\t%d\n",exit[arg],file_size(exit[arg]));
		return notify_fail( arg + " ���������������, �޷�����, ��֪ͨ wiz!!\n" );
    }


	if( !obj=load_object(exit[arg]) )
		error( "������������, ������ʦ�����\n" );
/*
        if(base_name(obj)[0..10]=="/open/clan/" &&
           base_name(obj)[11..14]!="area")
          return notify_fail("��������Ҫ��"+arg+"�������ǰ��ʱ��
��Ȼ�е�һ���������ƺ��Ǵ����������ȥ�Ǳ�!!\n");
*/
	if( !env->valid_leave( me, arg ) )
		return 0;
	if( me->over_encumbranced() )
		return notify_fail( "��ĸ��ɹ��أ��������á�\n" );

/* �ĵ����������жϽϼ�
	enemy = all_inventory( env );
	if( env->query("evil") || env->query("god") )
		if(sizeof(enemy) > 6 ) {
			for( j=0; j<sizeof(enemy); j++ )
				if( !enemy[j]->is_fighting() && !userp(enemy[j]) && !enemy[j]->is_corpse() && enemy[j]->is_character() )
					mob_number++;
		}
		if( mob_number > 5 && !wizardp(me) )
		return notify_fail("��ħ������аħ֮������,ʹ���޷��ƶ�\n");
*/
	if( obj->query("owner") ) {
		who = find_player(obj->query("owner"));
		if(!who) who = FINGER_D->acquire_login_ob(obj->query("owner"));
	        if(!who);
	     	else if( who->query("clan/id") == me->query("clan/id") &&
	     		who->query("clan/rank") < me->query("clan/rank") )
			return notify_fail( "��Ȩ���������\n" );
	}

        exit_number=sizeof(env->query("exits"));
        if( me->is_fighting() && !me->query_temp("follow-succeed") ){
//�μ��貨΢����ǿ���ܣ����ܱȱ�������
          flag=0;
          if((me->query("family/family_name")=="�μ�") && me->query("marks/linpo-steps"))
            flag=SKILL_D("linpo-steps")->can_flee(me,exit_number);
          if(flag) {
            mout = HIY"ʹ���貨΢���ľ�΢��������"+dir+"��ȥ��\n"NOR;
            min = HIG"��Ȼ�����ڵ��ϡ�\n"NOR;
            me->set_temp("flee_go",1);
            if ( me->query_temp("join_pk") )
                    me->add_temp( "go_away", 1 );
          }
          else{
            if(me->is_busy()) return 0;
                if ( me->can_flee(exit_number) ) {
                     mout = "ͻ�Ʒ�����" + dir + "��Ķ����ˡ�\n";
                     min = "����ײײ�����˹�����ģ����Щ�Ǳ���\n";
                     if ( me->query_temp("join_pk") )
                        me->add_temp( "go_away", 1 );
                }
                else {
                        // ���� tin
                        switch(random(4)) {
                                case 0: message_vision( HIW"$N��������, ������������, ����ʧ�ܡ�\n"NOR, me ); break;
                                case 1: message_vision( HIW"$N��������, �������˷���, ����ʧ�ܡ�\n"NOR, me ); break;
                                case 2: message_vision( HIW"$N��������, �����������衣\n"NOR, me ); break;
                                case 3: message_vision( HIW"$N��������, �������˷�����\n"NOR, me ); break;
                        }
                        return 1;
                }
          }
        }
        else {
            if(me->is_busy()) return 0;
if( me->query_temp("is_riding") && me->query_temp("horse") ) { 
                        horse = find_living( me->query_temp("horse") );
                         if(!horse) horse=this_player();
                        mout = "����"+horse->query("name")+"��" + dir + "���˹�ȥ��\n";
                        min = "����"+horse->query("name")+"���˹�����\n";
                }
                // ���ж��ķ�ʽ���� temp("go") by ACKY
                else {
                if( !go = (string)me->query_temp("go") ) 
                        go = "��";
                mout = "��" + dir + go + NOR"�˹�ȥ��\n";
                min  = go + NOR"�˹�����\n";
        }
        }
            if(me->is_busy() && !me->query_temp("flee_go")) return 0;
        me->delete_temp("flee_go");
        // �����󷨲���
        //roger �޸��� 98/5/25
        //Ŀǰֻ�ʺ�sha-array
        if (me->query_temp("leader")){
          array_use=me->query_skill_mapped("array");
          member = me->query_team();
          for (i=0; i<sizeof(member); i++)
          if(member[i])
          if (member[i]->query_temp("use_form")==1){
          tell_object(member[i],"�������ŵ����α��ƻ��ˡ�\n");
          if(find_object(SKILL_D(array_use)))
          return SKILL_D(array_use)->remove_array(member,me,me->query_temp("form_mean",1),me->query_temp("form_number",1));
                                                   }
                                    }

	if( userp(me) && !wizardp(me) && me->query("food") < 1 && !me->query("ghost") ) {
		me->do_command("hungry");
		write( "�óԵ�ʳ���ˡ�(eat)\n" );
		me->add( "gin", -me->query("age") );
		if( me->query("gin") < 1 ) {
			write( "������ð����...@_@\n" );
			me->unconcious();
			return 1;
		}
	}
	else
		me->add( "food", -1 );

        if (me->visible(me) && !me->query("env/����") )
          message( "vision", me->name() + mout, environment(me), ({me}) );
        if( me->query_temp("invis") ) me->delete_temp("invis");
        if( me->query_temp("see-wait") ) me->delete_temp("see-wait");


        repeat--;
        if ( me->move(obj, repeat) ) {
          all_inventory(env)->follow_me(me, arg);
          me->remove_all_enemy();
          if (me->visible(me) && !me->query("env/����") )
            message( "vision", me->name() + min, environment(me), ({me}) );
          me->set_temp("pending", 0);

// ���������������õķ���Ӽ��������õ�, �벻Ҫ�����ɾ��
//        if( !sizeof(all_inventory(env)) && ( !env->query("objects")
// ��Ϊall_inventory(env)���޻ᴫ�ش���ֵ,����������.Chun 09.22.96
          if ( !all_inventory(env) && ( !env->query("objects")
              || !sizeof(env->query("objects")) ) ) destruct(env);

          if (repeat > 0)
            main (me, arg, repeat);
          return 1;
        }
        return 0;
}

void do_flee(object me)
{
        mapping exits;
        string *directions, dir;

        if( !environment(me) || !living(me) ) return;
        exits = environment(me)->query("exits");
        if( !mapp(exits) || !sizeof(exits) ) {
          write ("�������ܣ������Ҳ������ڡ�\n");
          return;
        }
        else
          directions = keys(exits);
        if (!dir = me->query("env/wimpydir"))
          dir = directions[random(sizeof(directions))];
        else {
          dir = abbrdir(dir);
          if (member_array(dir, directions) == -1)
            dir = directions[random(sizeof(directions))];
        }
        tell_object(me, "�������һ���������...\n");
        tell_object(me, "�㳢����"+cdir(dir)+"���ܡ�\n");
        main(me, dir);
}

int help(object me)
{
        write(@HELP
ָ���ʽ : go <����>
ָ��˵�� :
           ������ָ���ķ����ƶ���
�����ο� :
           flee��wimpy��wimpydir
HELP
    );
    return 1;
}

