inherit F_CLEAN_UP;

int main(object me, string name)
{
   string msg;
   object ob;
   int	  login_time, current;

   seteuid(getuid(me));

   if( !name ) ob = me;
   else if (!wizardp(me))
     return notify_fail ("���������Ű������ڲ���ô�ϡ�\n");
   else ob = find_player(name);
   if( !ob ) return notify_fail ( "Ŀǰ�����޴��ˡ�\n" );
// by konn  ��ϵͳʱ���������ʵʱ��
//   current = time();
   current = LOGIN_D->query_time();
   login_time = ob->query_temp("login_time");

   msg  = sprintf( "������ԭ��׼ʱ��Ϊ: %s\n\n", ctime(current) );
   msg += sprintf( "%s��%s���߽����ġ�\n",
                    name?ob->name():"��",
                    CHINESE_D->chinese_time(login_time) ); 
   if ((login_time=current-login_time) >= 60)
     msg += sprintf( "%s�˴�����ʱ����ĿǰΪֹ��%s��\n",
                      name?ob->name():"��",
                      CHINESE_D->chinese_period( login_time ));

   msg += sprintf( "%s���ܵĵ�һ���Ǵ�%s��ʼ����ģ�\n",
                    name?ob->name():"��",
                    CHINESE_D->chinese_time(ob->query("һ��") )); 

   msg += sprintf( "%s�����Ѿ�����%s��\n",
                    name?ob->name():"��",
                    CHINESE_D->chinese_period(ob->query("һ������ʱ��") )); 

   if (!name)
     if (login_time > 86400)
       msg += "\n��ร���������ร�������ҹ������ͻ�㻵���Ө˨ߡ�\n";
     else if (login_time > 28800)
       msg += "\n������������Ҳδ��̫���˰ɣ��Ͽ�ȥ����������\n";
     else if (login_time > 14400)
       msg += "\n�ţ��ÿ��ǿ�����ʵ�����˰ɡ�\n";
     else
       msg += "\nϣ������ռ�����˼�뱼��!!\n";

   write (msg);
   return 1;
}

int help(object me)
{
   write( @HELP
ָ���ʽ : date						һ���÷�
	   date <����>					��ʦר��
ָ��˵�� :
           ���ָ�������̨�����ڵ�ʱ�̣���ͬʱ��֪���ʱ���ߣ�
         �Լ����߶���ˡ�
�����ο� :
           time��uptime
HELP );
   return 1;
}
