<form action="processData_form.php" method="POST">

        <label for="surname">Surname:</label><br>
        <input type="text" name="surname"
              value="<?php echo htmlspecialchars($_POST['surname'] ?? '', ENT_QUOTES, 'UTF-8'); ?>">
        <br><br>

        <label for="email">Email Address:</label><br>
        <input type="text" name="email"
              value="<?php echo htmlspecialchars($_POST['email'] ?? '', ENT_QUOTES, 'UTF-8'); ?>">
        <br><br>

        <label for="password">Password:</label><br>
        <input type="password" id="password" name="password" required>
        <br><br>

        <label for="address">Street Address:</label><br>
        <textarea name="address"><?php
        echo htmlspecialchars($_POST['address'] ?? '', ENT_QUOTES, 'UTF-8');
        ?></textarea>
        <br><br>

        <label for="state">State:</label><br>
        <select id="state" name="state" required>
            <option value="">-- Pilih State --</option>
            <option value="NSW">New South Wales</option>
            <option value="VIC">Victoria</option>
            <option value="QLD">Queensland</option>
            <option value="WA">Western Australia</option>
            <option value="SA">South Australia</option>
            <option value="TAS">Tasmania</option>
            <option value="NT">Northern Territory</option>
            <option value="ACT">Australian Capital Territory</option>
        </select>
        <br><br>

        <input type="hidden" name="country" value="Australia">

        <label>Gender:</label><br>

        <input type="radio" id="male"
               name="gender" value="Male" required>
        <label for="male">Male</label>

        <input type="radio" id="female"
               name="gender" value="Female">
        <label for="female">Female</label>

        <br><br>

        <input type="checkbox" id="vegetarian"
               name="vegetarian" value="Yes">
        <label for="vegetarian">Vegetarian?</label>

        <br><br>

        <input type="submit" value="Submit">
        <input type="reset" value="Reset">

    </form>