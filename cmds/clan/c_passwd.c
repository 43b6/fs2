inherit F_CLEAN_UP;

int main(object me, string str)
{
	if( !me->query("clan") )
		return notify_fail("��û�а��ɡ�\n");
        if( me->query("clan/rank") > 1)
            return notify_fail( "���ָ��ֻ�а���������!!!\n" );
        if( me != this_player(1) )
                return 0;
        if( me->query("clan/passwd") == "0" )
        {
                write("�������µ�����:");
                input_to("get_new_pass", 1, me);
                return 1;
        }
        write("Ϊ�˰�ȫ���, ��������ԭ�������롣\n");
        input_to("get_old_pass", 1, me);
        return 1;
}

void get_old_pass(string pass, object me)
{
        string old_pass;

        old_pass = me->query("clan/passwd");
        if( crypt(pass, old_pass) != old_pass ) {
                write("�������\n");
                return;
        }
        write("�������µ�����:");
        input_to("get_new_pass", 1, me);
        return;
}

int check_passwd (string passwd)
{
  int   i, n, word,cnt;
  string txt;
  if ((n = strlen (passwd)) < 5) return 0;

  cnt=0;
  for(i=0;i<sizeof(passwd);i++)
  {
    txt=sprintf("%d",passwd[i]);
    sscanf(txt,"%d",word);
    if((word <= 122 && word >= 97) ||
       (word <= 90 && word >= 65))
      cnt++;
  }
  if(!cnt) return 0;
  else if(cnt==sizeof(passwd)-1) return 0;
  else return 1;

}

void get_new_pass(string pass, object me)
{
        if(!check_passwd (pass)) {
                write ("����������ٺ���һ����ͨӢ����ĸ��һ������ͨӢ����ĸ.\n");
                write("\n��������һ���µ����룺");
                input_to("get_new_pass", 1, me );
        }
        write("\n��������һ�θոյ����룬����ȷ�ϣ�");
        input_to("confirm_new_pass", 1, me, crypt(pass,0));
}

private void confirm_new_pass(string pass, object ob, string new_pass)
{
        write("\n");
        if( crypt(pass, new_pass)!=new_pass ) {
                write("�Բ�������������벢����ͬ������ʹ��ԭ�������롣\n");
                return;
        }
        if( !ob->set("clan/passwd", new_pass) ) {
                write("������ʧ�ܣ�\n");
                return;
        }
        ob->save();
        write("�������ɹ���\n");
}
int help(object me)
{
  write(@HELP
ָ���ʽ : c_passwd
ָ��˵�� :
         ���ָ�����������İ��ɵ�����,�ڰ����������ʱ���õ�!!
Ҳ�ǰ��ɵ�������,������Ϊ��������Ҫ���Ű��ɵ�����!!!
         ϵͳ������
         ��Ҫ���㲻��ʹ���������ε����룺
             1.  ̫�̣�Ŀǰ�趨�ǲ��ܱ������Ԫ�̡�
             2.  ȫ������Ӣ���֣����ٱ���������ֻ�������š�
             3.  ȫ������������ţ���ȫ���������֡�
HELP
    );
    return 1;
}
