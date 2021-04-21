

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('hospital', '0007_auto_20200520_1023'),
    ]

    operations = [
        migrations.AddField(
            model_name='doctor',
            name='profile_pic',
            field=models.ImageField(null=True, upload_to='DoctorProfilePic/'),
        ),
    ]
