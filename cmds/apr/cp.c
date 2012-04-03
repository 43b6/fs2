// cp.c
// ���� ������Ԫ(?*) ��ʹ��
// fixed by wade 1995 10 23
 
inherit F_CLEAN_UP;
 
int main(object me, string arg)
{
  string        src, dst, dest, *dirs;
  // ������Ϊ���� cp * �õ�
  mixed         *file;
  string        dir, srcdir;
  int           i, j;
 
  seteuid(geteuid(me));

  // ��������
  if (!arg || sscanf(arg, "%s %s", src, dst)!=2 ) return
    notify_fail("ָ���ʽ: cp <ԭ����> <Ŀ�굵��> \n");

  // �ж��Ƿ��ǺϷ���Ŀ�굵��
  dst = resolve_path(me->query("cwd"), dst);

  // ȡ�� source ����
  dir = resolve_path(me->query("cwd"), src);
  dirs = explode(dir, "/");
  srcdir = dir;
  i = sizeof(dir) - sizeof(dirs[<1]);
  srcdir = dir[0..i-1];
  if( file_size(dir)==-2 && dir[<1] != '/' ) dir += "/";
  file = get_dir(dir, -1);
  if( !sizeof(file) ) {
    if (file_size(dir) == -2)
      return notify_fail("Ŀ¼�ǿյġ�\n");
    else
      return notify_fail("û���������: "+src+"��\n");
  }

  i = sizeof(file);
  if( file_size(dst)==-2 ) {    // ���� dest �Ǹ�Ŀ¼
    while(i--) {
      if (file[i][1]!=-2) {
        src = srcdir+file[i][0];
        dirs = explode(src, "/");
        dest = dst+ "/" + dirs[<1];
        cp(src, dest);
        if (file_size(dest) == -1)
          write("��û�ж�д"+dest+"��Ȩ����\n");
        else {
          write("cp "+src+" to "+dest+" OK!!!\n");

          log_file ("wiz/FILE_OPERATION",
            sprintf("%s(%s)�������� %s --> %s ��%s\n",
              me->query("name"),me->query("id"),src, dest, ctime(time()))
          );
        }
      }
    }
  }
  else
    while(i--) {
      if (file[i][1]!=-2) {
        src = srcdir+file[i][0];
        cp(src, dst);
        if (file_size(dst) == -1)
          write("��û�ж�д"+dst+"��Ȩ����\n");
        else {
          write("cp "+src+" to "+dst+" OK!!!\n");
          log_file ("wiz/COPY_FILE",
            sprintf("%s(%s)�������� %s --> %s ��%s\n",
              me->query("name"),me->query("id"),src,dst,ctime(time()))
          );
        }
      }
    }

  return 1;
}
 
int help(object me)
{
  write(@HELP
ָ���ʽ : cp <ԭ����> <Ŀ�굵��>
 
��ָ�������(��)����������
HELP
    );
    return 1;
}
 
