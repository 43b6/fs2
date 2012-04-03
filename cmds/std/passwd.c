// passwd.c

inherit F_CLEAN_UP;

int check_passwd (string);
void create() { seteuid(getuid());}

int main(object me, string arg)
{
  object ob;

  if( me != this_player(1) ) return 0;

  ob = me->query_temp("link_ob");
  if( !ob ) return 0;
  while( ob && ob->is_character() ) ob = ob->query_temp("link_ob");

  write("Ϊ�˰�ȫ���������������ԭ�������룺");
  input_to("get_old_pass", 1, ob);
  return 1;
}
void get_old_pass(string pass, object ob)
{
  string old_pass;

  write("\n");
  old_pass = ob->query("password");
  if( crypt(pass, old_pass)!=old_pass ) {
    write("�������\n");
    return;
  }
  write("�������µ����룺");
  input_to("get_new_pass", 1, ob );
}

void get_new_pass(string pass, object ob)
{
  if (!check_passwd (pass)) {
    write ("����������ٺ���һ����ͨӢ����ĸ��һ������ͨӢ����ĸ.\n");
    write("\n��������һ���µ����룺");
    input_to("get_new_pass", 1, ob );
  }
  else {

    write("\n��������һ�θոյ����룬����ȷ�ϣ�");
    input_to("confirm_new_pass", 1, ob, crypt(pass,0));
  }
}

void confirm_new_pass(string pass, object ob, string new_pass)
{
  write("\n");
  if( crypt(pass, new_pass)!=new_pass ) {
    write("�Բ�������������벢����ͬ������ʹ��ԭ�������롣\n");
    return;
  }
  if( !ob->set("password", new_pass) ) {
    write("������ʧ�ܣ�\n");
    return;
  }
  ob->save();
  write("�������ɹ���\n");
}
//�޸�by bss
//��ֻ���ñ�����
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
int help(object me)
{
  write(@HELP
ָ���ʽ : passwd
ָ��˵�� :
           ���ָ������޸�����������롣
         �����Ŀ�����ڱ����Լ������ﲻ����������ʹ�ã���ˣ�
         �����ʵ����趨���롣ͨ�����벻�ù��ڼ򵥡�ϵͳ������
         ��Ҫ���㲻��ʹ���������ε����룺
             1.  ̫�̣�Ŀǰ�趨�ǲ��ܱ������Ԫ�̡�

             2.  ȫ������Ӣ���֣����ٱ���������ֻ�������š�
             3.  ȫ������������ţ���ȫ���������֡�
HELP
    );
    return 1;
}
