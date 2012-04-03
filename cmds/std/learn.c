// learn.c ���� by babe

#include <ansi.h>
#include <basic_skill.h>
#include <skill.h>

string *reject_msg = ({
	"˵������̫�����ˣ�����ô�ҵ���\n",
	"�����ܳ�����һ����˵������̣�����ô�ҵ���\n",
	"Ц��˵��������Ц�ˣ��������С�������ʸ�ָ�㡱��ʲô��\n",
});

varargs int main( object me, string arg, int repeat )
{
	string skill, teacher, master,my_class;
	string record;
	mapping level;
	object ob;
	int master_skill, my_skill, gin_cost;
	int i, r = 0;

	seteuid(getuid());

        if( !arg || sscanf( lower_case(arg), "%s from %s", skill, teacher )!=2 )
                return notify_fail( "ָ���ʽ��learn <����> from <ĳ��>\n" );

    if( sscanf( skill, "%d %s", repeat, skill) != 2 )
		arg = skill;                                                         
	if( skill=="sun_fire_sword" ) {
		return notify_fail( "�˼���ֻ���ö��ģ�\n" );
	}
	if( skill=="paull-steps" && me->query("class") != "dancer" && (int)(me->query_skill("paull-steps", 1))==100)
	  { return notify_fail( "�㲻�����߲���������ѧ�ˣ�\n" );
	}
    if( skill=="nine-steps" && me->query("class") != "poisoner" && (int)(me->query_skill("nine-steps", 1))==100)   
	  { return notify_fail( "�㲻��ħ��ͽ����������ѧ�ˣ�\n" );
	}
	if( me->is_fighting() )
		return notify_fail( "����ĥǹ? ����������\n" );
	if( !( ob = present( teacher, environment(me) ) ) || !ob->is_character() )
		return notify_fail( "��Ҫ��˭���?\n" );
     if( ob->query("make_clan") || ob->query("clan_make"))
		return notify_fail( "������ clan_npc ���, ����bug!\n" );
	if( ob->query("no_learn")==1 )
		return notify_fail( "������ clan_npc ���, ����bug!\n" );
	if( ob->query("master") )
		return notify_fail( ob->query("name")+"�޷�����������ܡ�\n" );
	if( me->query("horse")==1 || ob->query("horse")==1 )
		return notify_fail( "����ѧϰ��\n" );
	if( !living(ob) )
		return notify_fail( "��.. ����Ȱ�" + ob->name() + "Ū����˵��\n" );
	if( wizardp(ob) )
		return notify_fail( "���ܸ���ʦѧ���ܡ�\n" );
	if( !mapp(basic_skill[skill]) ) {
		if( !me->is_apprentice_of(ob) ) {
			if( (string)me->query("family/family_name") != (string)ob->query("family/family_name") ||
			    (int)ob->query("family/privs") != -1)
				if( me->query("class") != ob->query("class") ||
				    !me->query("class") || !ob->query("class") ) {
					notify_fail( ob ->name() + reject_msg[random(sizeof(reject_msg))] );
					if( !(ob->recognize_apprentice(me)) )
						return 0;
				}
		}
		else
			if( me->query("class") != ob->query("class") || !me->query("class") || !ob->query("class") )
				return notify_fail(ob->query("name")+"˵��\n������ǲ�ͬ��ְҵ��ˡ�Ҳ��ܽ��㡣\n");
	}
	if( skill == basic_skill[skill] ) {
		if( !ob->query("guild_master") && !me->is_apprentice_of(ob) )
			return notify_fail( "��������ֻ�ܸ������ϴ�ѧ,\n���Ǹ����ʦ��ѧ��\n" );
	}
	else
		if( ob->query("family/family_name") != me->query("family/family_name") )
			return notify_fail( "���⼼��ֻ����ͬ���ɵ���ѧ��\n" );

	if( !me->is_apprentice_of(ob) && skill=="spiritism" )
		return notify_fail( "������ֻ����ʦ�����, ��������������\n" );

 	if( !ob->query("guild_master") && !me->is_apprentice_of(ob) &&
	    !( ob->query("env/����/all/all") || ob->query("env/����/all/"+skill) ||
	    ob->query("env/����/"+me->query("id")+"/all") || 
	    ob->query("env/����/"+me->query("id")+"/"+skill) ) )
		return notify_fail( "�Է����������������������ܣ�\n" );

	if( !master_skill = ob->query_skill( skill, 1 ) )
		return notify_fail( "���������±����ұ���ѧ�ˡ�\n" );
	if( !SKILL_D(skill)->valid_learn(me) )
		return notify_fail( "����Ŀǰ��������û�а취ѧϰ���ּ��ܡ�\n" );
	gin_cost = 150 / (int)ob->query("int") + 150 / (int)me->query("int");

	if( userp(ob) )
		tell_object( ob, sprintf( "%s��������йء�%s�������⡣\n",
			me->name(), to_chinese(skill)) );
	printf( "����%s����йء�%s�������ʡ�\n", ob->name(), to_chinese(skill) );

	if( repeat==0 )
		repeat = 1;
    if(repeat > 500) repeat=500;

	for( i=0; i<repeat; i++ ) {
		my_skill = me->query_skill( skill, 1 );
		if( my_skill >= master_skill )
			return notify_fail( "�������ĳ̶��Ѿ���������ˡ�\n" );
		if( !my_skill ) {
			gin_cost *= 2;
			me->set_skill( skill, 0 );
		}
		if( (int)me->query("learned_points") >= (int)me->query("potential") )
			return notify_fail( "���Ǳ���Ѿ����ӵ����ޣ�û�а취�ٳɳ���\n" );
		if( (int)me->query("gin") > gin_cost ) {
			if( (string)SKILL_D(skill)->type()=="martial"  &&
			    ( my_skill*my_skill*my_skill/300 )*my_skill>me->query("combat_exp") )
				return notify_fail( "����ȱ��ʵս���飬���޷����"+ob->name()+"�Ľ̵���\n" );
			else {
				r = 1;
				me->add( "learned_points", 1 );
				me->improve_skill( skill, random(me->query("int") + ob->query_skill(skill,1)/5) );
				/*if( random(1000) < 1 ) {
					ob->improve_skill( skill, random(ob->query("int")) );
					tell_object( ob, sprintf( HIC"����̵�%s�йء�%s����ͬʱ, ͻȻ�����%s������һ��İ��ء�\n"NOR,
							me->name(), to_chinese(skill), to_chinese(skill) ) );
				}*/
			}
			me->receive_damage( "gin", gin_cost );
		}
		else
			return notify_fail ("�����̫���ˣ����ʲôҲû��ѧ����\n");
	}

	if( r == 1 )
		printf( "������%s��ָ�����ƺ���Щ�ĵá�\n", ob->name() );

	return 1;
}

int help( object me )
{
        write(@HELP
ָ���ʽ : learn <����> from <ĳ��>
ָ��˵�� :
           ���ָ������������������й�ĳһ�ּ��ܵ�������
     �⣬��Ȼ������̵Ķ�����������ϵ�����������ߣ���
     �㾭�����ַ�ʽѧϰ�����ļ���Ҳ�����ܸ���������̵��ˣ�
     Ȼ����Ϊ����ѧϰ��ʽ�൱��һ�֡�����Ĵ��С������ѧϰ
     ����˵����Ϥһ���¼������ķ�����
           ͨ����һ���˸�ѧ��һ���¼����ǲ�����ʲô��������
     �ģ����Ǿ���ʵ���ϵ�Ӧ�����������⣬��Щ�������ѧϰһ
     ���¼��ܵĹ����Ǻ���Ҫ�ģ������Ǹ�����Ϊ�������ܻ�����
     �������ܣ�����Ҫ���ɡ��������⩤������⡱�Ĺ��̲��ܵ�
     ���Ϻõ�Ч����������ǽ����ַ�������Ĺ����á�Ǳ�ܡ���
     �����ʾ��һ�����ܹ��Լ�����ĳЩ���⣬��ʾ��(��)�н��
     ���������Ǳ�ܣ��������������Ǳ��ʱ�Ϳ����������ָ��
     ������������̣�����ý�����
           ѧϰ��Ҫ����һЩ�����������ĵľ��������Լ�������
     ѧϰ����������йء�
           �������֪�����ܴӶԷ�ѧ��ʲô���ܣ�����Է�����
     ��ʦ���������� skills ָ��ֱ�Ӳ鿴������������ʦ����
     ��ôͨ��������������ʾ����ֻ���Լ���취��
�����ο� :
           practice��study
     ����˵��:����Դ�learn 10 �������� from master......
         ��Ч�������learn force from master...ʮ��.....
         ���Խ�ʡϵͳ��Դ........

HELP );
        return 1;
}
