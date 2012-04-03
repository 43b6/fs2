// kill.c
//Modify By Acelan...99.7.27......Chan ���˵ ͬһ���˶�ͬһ������ kill ָ�� ��������

#include <ansi.h>

int help( object me );

int wait_kill( object me , object obj )
{
        message_vision( HIY "$n�⵽$Nͻ��������������ʱ������֣���֪���룡\n" NOR,me,obj);
     obj->start_busy(1); //����..��Ϊ��������kill����busy����..����Ϊһ�� by chan
        me->delete_temp("invis");
}

int group_kill( object me , object obj )
{
        object *all = me->query_team();
        int i;
        for( i = 0 ; i < sizeof(all) ; i ++ ) {
        if(present(obj,environment(all[i]))) {
                all[i]->kill_ob( obj );
                obj->kill_ob( all[i] );

//Add By AceLan...���ҷ��� kill ������ obj ������ mark
                obj->set_temp("killer"+ all[i]->query("id"), 1);
//�����Ӻ���
                call_out("remove_killer",5,obj,all[i]->query("id"));

        }
        }
}

//�Ƴ� killer �� mark...By AceLan
int remove_killer(object obj,string name)
{
    if(obj)
   obj->delete_temp("killer"+ name);
   return 1;
}

int main(object me, string arg)
{
  object obj, pal;
  string *killer, callname;


  if( !arg )
    return help(me);

  arg = lower_case(arg);
  me->delete_temp("cmd_cnt");  
  if(!objectp(obj = present(arg, environment(me))) || obj->gage(me))
    return notify_fail("����ɱ��˭��?!\n");

  if( !obj->is_character() || obj->is_corpse() )
    return notify_fail("�����һ�㣬�ǲ����ǻ��\n");

  if(!obj->query("pker")) //pkerû�а�ȫ������
   {
   if( environment(me)->query("no_kill") || environment(me)->query("no_fight") || me->query("id")=="guest")
     return notify_fail("���ﲻ׼��ɱ��\n");
   }
  if (in_edit(obj) || in_input(obj) || obj->query_temp("netdead"))
    return notify_fail ("�����ѹ����ٿ���.\n");

  if(obj==me) return notify_fail ("����ɱ��? �� suicide -f\n");

 if( obj->query("id")!="swy" && wizardp(obj) && !wizardp(me) )  
		return notify_fail( "��������ô��, ����������" + obj->query("name") + "��\n" );
	if( wizardp(me) && userp(obj) && wizhood(me)!="(manager)" && wizhood(me) != "(admin)" )
		return notify_fail( "��ʦ�����ҿ����, ��Ҫ��������ר�ŵĲ���Ա�����ԡ�\n" );
	if( !userp(obj) && obj->query("no_kill") )
		return notify_fail( "�㲻�ÿ�ɱ����\n" );
	if( ((me->query("mud-age") - obj->query("mud_age")) > 172800) && userp(obj) && userp(me) )
		return notify_fail("�����Գ�������۸�����\n");
	if( obj->query_temp("killer"+(string)me->query("id")))
		return notify_fail( "���ѿ�ɱ������󺹡�\n" );

  callname = obj->query("name");

  message_vision("\n$N����$n�ȵ�����" 
    + callname + "�����ղ������������һ��\n\n", me, obj);

  if( !userp(obj) && !obj->accept_kill(me) )
	return notify_fail( "�������㿳����"+obj->name()+"��\n" );

  if( obj->query("master") )
	if( obj->query("combat_exp") < 100000 || environment(obj)->query("pkroom") ||
		environment(obj)->query("no_die_room") )
		return notify_fail( "����" +obj->name()+ "һ����·�ɡ�\n" );

  me->set_temp("killer_time",time());

  if( obj->query_temp("pal")==me && !wizardp(obj) )
	return notify_fail( "��ɱ��ͷ��?\n" );

  if( pal=me->query_temp("pal") )
	if( present( pal, environment(me) ) ) {
		pal->kill_ob(obj);
	}
  me->kill_ob(obj);
  obj->kill_ob(me);

//Add By AceLan...���ҷ��� kill ������ obj ������ mark
  obj->set_temp("killer"+ me->query("id"),1);
//�����Ӻ���
  call_out("remove_killer",5,obj,me->query("id"));

  if( me->is_team_leader() ) group_kill( me , obj );
  if( me->query_temp("invis") && obj->query_temp("see-wait") != me )
                wait_kill( me , obj );

  return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : kill <����>
ָ��˵�� : 
           ���ָ������������ʼ����һ��������҇���
         ɱ���Է���kill �� fight ���Ĳ�ͬ����˫����
         ���浶ʵǹ�ش򶷣�Ҳ����˵����������ˡ�����
          kill ֻ�赥����һ����Ը�Ϳ��Գ�����������
         �κ���ʹ�� kill ָ��Ὺʼս����ͨ�������
         ���� NPC �Ļ�������Ҳ��ͬ������ʹ�� kill��
           �����˶���ʹ�� kill ָ��ʱ����ֺ�ɫ������
         �����㣬����һ����Ҷ��ԣ������û�ж�һ����
         ��ʹ�ù� kill ָ��Ͳ��Ὣ�Է���Ĵ��˻�ɱ
         ��( ʹ�÷������� )��
�����ο� :
           fight
�ر�˵�� :
           �й� fight �� kill �������뿴 'help combat'��
           �й� pk�������뿴"help pk"��
HELP
    );
    return 1;
}
 
